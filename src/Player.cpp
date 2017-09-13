#include "Player.hpp"
#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

Player::Player(int x, int y, int w, int h)
    : bullets({})
{
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;

  vx = 0;
  speed = 5;
}

Player::~Player()
{
}

void Player::update()
{
  x += vx;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;

  if (bullets.size() > 0)
  {
    for (int i = 0; i < bullets.size(); i++)
    {
      if (bullets[i].getY() < 0)
      {
        bullets.erase(bullets.begin() + i);
      }
      else
      {
        bullets[i].update();
      }
    }
  }
}

void Player::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 142, 79, 175, 255);
  SDL_RenderFillRect(renderer, &rect);

  if (bullets.size() > 0)
  {
    for (int i = 0; i < bullets.size(); i++)
    {
      bullets[i].render(renderer);
    }
  }
}

void Player::setVx(int vx)
{
  this->vx = vx;
}

void Player::fire()
{
  bullets.push_back(Bullet(this->x, this->y));
}
#include "Bullet.hpp"
#include <SDL2/SDL.h>
#include <iostream>

using namespace std;

Bullet::Bullet(int x, int y)
{
  this->x = x;
  this->y = y;

  w = 5;
  h = 5;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;

  vy = -20;
}

Bullet::~Bullet()
{
}

void Bullet::update()
{
  y += vy;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;
}

void Bullet::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
  SDL_RenderFillRect(renderer, &rect);
}

int Bullet::getY()
{
  return y;
}

SDL_Rect *Bullet::getRect()
{
  return &rect;
}
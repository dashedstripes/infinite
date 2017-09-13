#include "Enemy.hpp"
#include <iostream>

using namespace std;

Enemy::Enemy(int x, int y, int w, int h)
{
  this->x = x;
  this->y = y;
  this->w = w;
  this->h = h;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;

  vy = 10;
  speed = 5;
}

Enemy::~Enemy()
{
}

void Enemy::update()
{
  y += vy;
}

void Enemy::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 14, 53, 24, 255);
  SDL_RenderFillRect(renderer, &rect);
}

SDL_Rect *Enemy::getRect()
{
  return &rect;
}
#include "MoveableEntity.hpp"

MoveableEntity::MoveableEntity(int x, int y, int w, int h)
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
  vy = 0;

  speed = 5;
}

MoveableEntity::~MoveableEntity()
{
}

void MoveableEntity::update()
{
  x += vx;
  y += vy;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;
}

void MoveableEntity::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 142, 79, 175, 255);
  SDL_RenderFillRect(renderer, &rect);
}

SDL_Rect *MoveableEntity::getRect()
{
  return &rect;
}

int MoveableEntity::getX()
{
  return x;
}

int MoveableEntity::getY()
{
  return y;
}

void MoveableEntity::setVx(int vx)
{
  this->vx = vx;
}

void MoveableEntity::setVy(int vy)
{
  this->vy = vy;
}
#include "Entity.hpp"

Entity::Entity(int x, int y, int w, int h)
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

Entity::~Entity()
{
}

void Entity::update()
{
  x += vx;
  y += vy;

  rect.x = this->x;
  rect.y = this->y;
  rect.w = this->w;
  rect.h = this->h;
}

void Entity::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 142, 79, 175, 255);
  SDL_RenderFillRect(renderer, &rect);
}

SDL_Rect *Entity::getRect()
{
  return &rect;
}

int Entity::getX()
{
  return x;
}

int Entity::getY()
{
  return y;
}

void Entity::setVx(int vx)
{
  this->vx = vx;
}

void Entity::setVy(int vy)
{
  this->vy = vy;
}
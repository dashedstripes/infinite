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

  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 255;
}

Entity::~Entity()
{
}

void Entity::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
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
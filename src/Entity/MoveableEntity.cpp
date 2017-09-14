#include "MoveableEntity.hpp"

MoveableEntity::MoveableEntity(int x, int y, int w, int h)
    : Entity(x, y, w, h)
{
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

void MoveableEntity::setVx(int vx)
{
  this->vx = vx;
}

void MoveableEntity::setVy(int vy)
{
  this->vy = vy;
}
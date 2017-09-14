#include "Bullet.hpp"
#include <iostream>

using namespace std;

Bullet::Bullet(int x, int y)
    : MoveableEntity(x, y, 5, 5)
{
  this->vy = -20;

  color.r = 255;
  color.g = 0;
  color.b = 0;
  color.a = 255;
}

Bullet::~Bullet()
{
}
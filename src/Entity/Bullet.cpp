#include "Bullet.hpp"
#include <iostream>

using namespace std;

Bullet::Bullet(int x, int y)
    : Entity(x, y, 5, 5)
{
  this->vy = -20;
}

Bullet::~Bullet()
{
}
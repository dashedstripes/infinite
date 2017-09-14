#include "Enemy.hpp"
#include <iostream>

using namespace std;

Enemy::Enemy(int x, int y, int w, int h)
    : MoveableEntity(x, y, w, h)
{
}

Enemy::~Enemy()
{
}
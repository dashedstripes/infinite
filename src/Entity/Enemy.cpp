#include "Enemy.hpp"
#include <iostream>

using namespace std;

Enemy::Enemy(int x, int y, int w, int h)
    : MoveableEntity(x, y, w, h)
{
    color.r = 163;
    color.g = 125;
    color.b = 200;
    color.a = 255;
}

Enemy::~Enemy()
{
}
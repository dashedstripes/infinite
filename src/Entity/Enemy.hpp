#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <SDL2/SDL.h>
#include "MoveableEntity.hpp"

class Enemy : public MoveableEntity
{
public:
  Enemy(int x, int y, int w, int h);
  ~Enemy();
};

#endif
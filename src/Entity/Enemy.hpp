#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <SDL2/SDL.h>
#include "Entity.hpp"

class Enemy : public Entity
{
public:
  Enemy(int x, int y, int w, int h);
  ~Enemy();
};

#endif
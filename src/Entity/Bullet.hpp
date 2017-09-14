#ifndef BULLET_HPP
#define BULLET_HPP

#include <SDL2/SDL.h>
#include "MoveableEntity.hpp"

class Bullet : public MoveableEntity
{
public:
  Bullet(int x, int y);
  ~Bullet();
};

#endif
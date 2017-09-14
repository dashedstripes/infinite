#ifndef BULLET_HPP
#define BULLET_HPP

#include <SDL2/SDL.h>
#include "Entity.hpp"

class Bullet : public Entity
{
public:
  Bullet(int x, int y);
  ~Bullet();
};

#endif
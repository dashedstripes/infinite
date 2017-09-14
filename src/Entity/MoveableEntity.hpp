#ifndef MOVEABLE_ENTITY_HPP
#define MOVEABLE_ENTITY_HPP

#include <SDL2/SDL.h>
#include "Entity.hpp"

class MoveableEntity : public Entity
{
public:
  MoveableEntity(int x, int y, int w, int h);
  ~MoveableEntity();
  void update();
  void setVx(int vx);
  void setVy(int vy);

  int speed;

protected:
  int vx;
  int vy;
};

#endif
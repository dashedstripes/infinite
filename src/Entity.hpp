#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SDL2/SDL.h>

class Entity
{
public:
  Entity(int x, int y, int w, int h);
  ~Entity();
  void update();
  void render(SDL_Renderer *renderer);
  SDL_Rect *getRect();
  int getX();
  int getY();
  void setVx(int vx);
  void setVy(int vy);

  int speed;

protected:
  int x;
  int y;
  int w;
  int h;
  int vx;
  int vy;
  SDL_Rect rect;
};

#endif
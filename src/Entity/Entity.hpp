#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SDL2/SDL.h>

class Entity
{
public:
  Entity(int x, int y, int w, int h);
  ~Entity();
  void render(SDL_Renderer *renderer);
  SDL_Rect *getRect();
  int getX();
  int getY();

private:
  struct RGBA
  {
    int r;
    int g;
    int b;
    int a;
  };

protected:
  int x;
  int y;
  int w;
  int h;
  RGBA color;
  SDL_Rect rect;
};

#endif
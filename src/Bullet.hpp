#ifndef BULLET_HPP
#define BULLET_HPP

#include <SDL2/SDL.h>

class Bullet
{
public:
  Bullet(int x, int y);
  ~Bullet();
  void update();
  void render(SDL_Renderer *renderer);
  int getY();
  SDL_Rect *getRect();

private:
  int x;
  int y;
  int w;
  int h;
  int vy;
  SDL_Rect rect;
};

#endif
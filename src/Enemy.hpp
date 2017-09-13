#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <SDL2/SDL.h>

class Enemy
{
public:
  int speed;
  Enemy(int x, int y, int w, int h);
  ~Enemy();
  void update();
  void render(SDL_Renderer *renderer);

private:
  int x;
  int y;
  int w;
  int h;
  int vx;
  int vy;
  SDL_Rect rect;
};

#endif
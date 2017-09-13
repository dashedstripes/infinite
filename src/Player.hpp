#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include "Bullet.hpp"

using namespace std;

class Player
{
public:
  int speed;
  Player(int x, int y, int w, int h);
  ~Player();
  void update();
  void render(SDL_Renderer *renderer);
  void setVx(int vx);
  void fire();

private:
  int x;
  int y;
  int w;
  int h;
  int vx;
  SDL_Rect rect;
  vector<Bullet> bullets;
};

#endif
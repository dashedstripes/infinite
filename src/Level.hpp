#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include "Enemy.hpp"

class Level
{
public:
  Level(int difficulty);
  ~Level();
  void update();
  void render(SDL_Renderer *renderer);
  Enemy createEnemy();

private:
  int difficulty;
  std::vector<Enemy> enemies;
};

#endif
#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include "Entity/Enemy.hpp"
#include "Entity/Player.hpp"

class Level
{
public:
  Level(int difficulty);
  ~Level();
  void update();
  void render(SDL_Renderer *renderer);
  Enemy createEnemy();
  Player player;
  bool isColliding(SDL_Rect *a, SDL_Rect *b);
  bool isActive();

private:
  int difficulty;
  std::vector<Enemy> enemies;
};

#endif
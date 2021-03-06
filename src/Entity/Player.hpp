#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include "MoveableEntity.hpp"
#include "Bullet.hpp"

class Player : public MoveableEntity
{
public:
  Player(int x, int y, int w, int h);
  ~Player();
  void update();
  void render(SDL_Renderer *renderer);
  void fire();
  std::vector<Bullet> bullets;
};

#endif
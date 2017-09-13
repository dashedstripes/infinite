#ifndef GAME_HPP
#define GAME_HPP

#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include "Player.hpp"
#include "StateManager.hpp"
#include "LevelManager.hpp"
#include "Menu.hpp"

class Game
{
public:
  Game();
  ~Game();
  void init();
  void handleEvents();
  void update();
  void render();
  void handleKeyDown(int keycode);
  void handleKeyUp(int keycode);
  void handleMouseButtonDown(SDL_Event event);

private:
  int width;
  int height;
  bool isRunning;
  bool isKeyDown;
  SDL_Window *window;
  SDL_Renderer *renderer;
  StateManager stateManager;
  LevelManager levelManager;
  Menu menu;
};

#endif
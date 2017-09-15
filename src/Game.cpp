#include "Game.hpp"
#include <iostream>

using namespace std;

Game::Game()
    : width(640),
      height(480),
      menu(NULL)
{
  isRunning = false;
  isKeyDown = false;
}

Game::~Game()
{
}

void Game::init()
{
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");

  window = SDL_CreateWindow("Infinite", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_PRESENTVSYNC);

  menu = Menu(renderer);

  stateManager.setCurrentState(StateManager::State::MENU);

  isRunning = true;

  while (isRunning)
  {
    handleEvents();
    update();
    render();
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

void Game::handleEvents()
{
  SDL_Event event;
  while (SDL_PollEvent(&event))
  {
    switch (event.type)
    {
    case SDL_KEYDOWN:
      handleKeyDown(event.key.keysym.sym);
      break;
    case SDL_KEYUP:
      handleKeyUp(event.key.keysym.sym);
      break;
    case SDL_QUIT:
      isRunning = false;
      break;
    case SDL_MOUSEBUTTONDOWN:
      handleMouseButtonDown(event);
      break;
    }
  }
}

void Game::update()
{

  if (stateManager.getCurrentState() == StateManager::State::MENU)
  {
  }

  if (stateManager.getCurrentState() == StateManager::State::PLAYING)
  {
    levelManager.getCurrentLevel()->update();

    if (!levelManager.getCurrentLevel()->isActive())
    {
      stateManager.setCurrentState(StateManager::State::GAME_OVER);
    }
  }

  if (stateManager.getCurrentState() == StateManager::State::GAME_OVER)
  {
    cout << "Game over" << endl;
  }
}

void Game::render()
{
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
  SDL_RenderClear(renderer);

  if (stateManager.getCurrentState() == StateManager::State::MENU)
  {
    menu.render(renderer);
  }

  if (stateManager.getCurrentState() == StateManager::State::PLAYING)
  {
    levelManager.getCurrentLevel()->render(renderer);
  }

  if (stateManager.getCurrentState() == StateManager::State::GAME_OVER)
  {
  }

  SDL_RenderPresent(renderer);
}

void Game::handleKeyDown(int keycode)
{
  isKeyDown = true;

  switch (keycode)
  {
  case SDLK_w:
    break;
  case SDLK_a:
    levelManager.getCurrentLevel()->player.setVx(-5);
    break;
  case SDLK_s:
    break;
  case SDLK_d:
    levelManager.getCurrentLevel()->player.setVx(5);
    break;
  case SDLK_SPACE:
    levelManager.getCurrentLevel()->player.fire();
    break;
  }
}

void Game::handleKeyUp(int keycode)
{
  isKeyDown = false;
  switch (keycode)
  {
  case SDLK_w:
    break;
  case SDLK_a:
    levelManager.getCurrentLevel()->player.setVx(0);
    break;
  case SDLK_s:
    break;
  case SDLK_d:
    levelManager.getCurrentLevel()->player.setVx(0);
    break;
  }
}

void Game::handleMouseButtonDown(SDL_Event event)
{
  switch (event.button.button)
  {
  case SDL_BUTTON_LEFT:
    if (menu.isPressed(event.button.x, event.button.y))
    {
      stateManager.setCurrentState(StateManager::State::PLAYING);
    }
    break;
  }
}
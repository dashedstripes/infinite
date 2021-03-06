#include "Menu.hpp"
#include <SDL2/SDL_image.h>

Menu::Menu(SDL_Renderer *renderer)
{
  bg.x = 0;
  bg.y = 0;
  bg.w = 640;
  bg.h = 480;

  img = IMG_LoadTexture(renderer, "res/images/play-button.png");
  texr.x = 640 / 2 - 100;
  texr.y = 480 / 2 - 30;
  texr.w = 200;
  texr.h = 60;
}

Menu::~Menu()
{
}

void Menu::update()
{
}

void Menu::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
  SDL_RenderFillRect(renderer, &bg);
  SDL_RenderCopy(renderer, img, NULL, &texr);
}

bool Menu::isPressed(int x, int y)
{
  if ((x > texr.x) && (x < texr.x + texr.w) && (y > texr.y) && (y < texr.y + texr.h))
  {
    return true;
  }

  return false;
}
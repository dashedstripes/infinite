#include "Menu.hpp"
#include <SDL2/SDL_image.h>

Menu::Menu(SDL_Renderer *renderer)
{
  img = IMG_LoadTexture(renderer, "res/images/play-button.png");
  texr.x = 640 / 2 - 52;
  texr.y = 480 / 2 - 35;
  texr.w = 105;
  texr.h = 70;
}

Menu::~Menu()
{
}

void Menu::update()
{
}

void Menu::render(SDL_Renderer *renderer)
{
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
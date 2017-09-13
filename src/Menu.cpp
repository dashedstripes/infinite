#include "Menu.hpp"

Menu::Menu()
{
  rect.x = (640 / 2) - 100;
  rect.y = (480 / 2) - 25;
  rect.w = 200;
  rect.h = 50;
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
  SDL_RenderFillRect(renderer, &rect);
}

bool Menu::isPressed(int x, int y)
{
  if ((x > rect.x) && (x < rect.x + rect.w) && (y > rect.y) && (y < rect.y + rect.h))
  {
    return true;
  }

  return false;
}
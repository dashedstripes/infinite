#include "Menu.hpp"

Menu::Menu()
{
  rect.x = 100;
  rect.y = 100;
  rect.w = 100;
  rect.h = 100;
}

Menu::~Menu()
{
}

void Menu::update()
{
}

void Menu::render(SDL_Renderer *renderer)
{
  SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
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
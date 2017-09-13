#ifndef MENU_HPP
#define MENU_HPP

#include <SDL2/SDL.h>

class Menu
{
public:
  Menu();
  ~Menu();
  void update();
  void render(SDL_Renderer *renderer);

private:
  SDL_Rect rect;
};

#endif
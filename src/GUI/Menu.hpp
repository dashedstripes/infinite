#ifndef MENU_HPP
#define MENU_HPP

#include <SDL2/SDL.h>

class Menu
{
public:
  Menu(SDL_Renderer *renderer);
  ~Menu();
  void update();
  void render(SDL_Renderer *renderer);
  bool isPressed(int x, int y);

private:
  SDL_Rect bg;
  SDL_Rect texr;
  SDL_Texture *img;
};

#endif
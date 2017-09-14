#ifndef STATE_MANAGER_HPP
#define STATE_MANAGER_HPP

#include <SDL2/SDL.h>

class StateManager
{
public:
  StateManager();
  ~StateManager();

  enum State
  {
    MENU,
    PLAYING,
    GAME_OVER
  };

  void setCurrentState(State newState);
  State getCurrentState();

private:
  State currentState;
};

#endif
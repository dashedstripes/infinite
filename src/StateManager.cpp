#include "StateManager.hpp"

StateManager::StateManager()
    : currentState(MENU)
{
}

StateManager::~StateManager()
{
}

void StateManager::setCurrentState(StateManager::State newState)
{
  currentState = newState;
}

StateManager::State StateManager::getCurrentState()
{
  return currentState;
}

#ifndef LEVEL_MANAGER_HPP
#define LEVEL_MANAGER_HPP

#include "Level.hpp"
#include <iostream>
#include <vector>

class LevelManager
{
public:
  LevelManager();
  ~LevelManager();
  Level getCurrentLevel();

private:
  int currentLevel;
  std::vector<Level> levels;
};

#endif
#include "LevelManager.hpp"

LevelManager::LevelManager()
    : currentLevel(2),
      levels({})
{
  levels.push_back(Level(1));
  levels.push_back(Level(2));
}

LevelManager::~LevelManager()
{
}

Level *LevelManager::getCurrentLevel()
{
  for (int i = 0; i < levels.size(); i++)
  {
    if (i == (currentLevel - 1))
    {
      return &levels[i];
    }
  }

  return &levels[0];
}

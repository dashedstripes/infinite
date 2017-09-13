#include "Level.hpp"
#include <iostream>

using namespace std;

Level::Level(int difficulty)
    : player(640 / 2, (480 / 2) + 150, 10, 10),
      enemies({})
{
  this->difficulty = difficulty;

  if (difficulty == 1)
  {
    for (int i = 0; i <= 10; i++)
    {
      enemies.push_back(createEnemy());
    }
  }

  if (difficulty == 2)
  {
    for (int i = 0; i <= 20; i++)
    {
      enemies.push_back(createEnemy());
    }
  }
}

Level::~Level()
{
}

Enemy Level::createEnemy()
{
  return Enemy(rand() % (600 - 100 + 1) + 100, rand() % (250 - 10 + 1) + 10, 20, 20);
}

void Level::update()
{

  // Check for collisions
  for (int i = 0; i < enemies.size(); i++)
  {
    for (int j = 0; j < player.bullets.size(); j++)
    {
      if (isColliding(player.bullets[j].getRect(), enemies[i].getRect()))
      {
        player.bullets.erase(player.bullets.begin() + j);
        enemies.erase(enemies.begin() + i);
      }
    }
  }

  // Update
  for (int i = 0; i < enemies.size(); i++)
  {
    enemies[i].update();
  }

  player.update();
}

void Level::render(SDL_Renderer *renderer)
{
  for (int i = 0; i < enemies.size(); i++)
  {
    enemies[i].render(renderer);
  }

  player.render(renderer);
}

bool Level::isColliding(SDL_Rect *a, SDL_Rect *b)
{
  if (a->x < b->x + b->w &&
      a->x + a->w > b->x &&
      a->y < b->y + b->h &&
      a->h + a->y > b->y)
  {
    return true;
  }
  else
  {
    return false;
  }
}

bool Level::isActive()
{
  if (enemies.size() != 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
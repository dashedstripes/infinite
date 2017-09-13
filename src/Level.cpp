#include "Level.hpp"

Level::Level(int difficulty)
    : enemies({})
{
    this->difficulty = difficulty;

    if (difficulty == 1)
    {
        enemies.push_back(createEnemy());
    }

    if (difficulty == 2)
    {
        for (int i = 0; i < 2; i++)
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
    return Enemy((rand() % (600 - 100) + 1), (rand() % (600 - 200) + 1), 20, 20);
}

void Level::update()
{
    for (int i = 0; i < enemies.size(); i++)
    {
        enemies[i].update();
    }
}

void Level::render(SDL_Renderer *renderer)
{
    for (int i = 0; i < enemies.size(); i++)
    {
        enemies[i].render(renderer);
    }
}

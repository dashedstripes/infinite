#include "Player.hpp"

Player::Player(int x, int y, int w, int h)
    : Entity(x, y, w, h),
      bullets({})
{
}

Player::~Player()
{
}

void Player::update()
{
  Entity::update();

  if (bullets.size() > 0)
  {
    for (int i = 0; i < bullets.size(); i++)
    {
      if (bullets[i].getY() < 0)
      {
        bullets.erase(bullets.begin() + i);
      }
      else
      {
        bullets[i].update();
      }
    }
  }
}

void Player::render(SDL_Renderer *renderer)
{
  Entity::render(renderer);

  if (bullets.size() > 0)
  {
    for (int i = 0; i < bullets.size(); i++)
    {
      bullets[i].render(renderer);
    }
  }
}

void Player::fire()
{
  bullets.push_back(Bullet(this->x, this->y));
}
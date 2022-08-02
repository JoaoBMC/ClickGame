#include "game.h"

#define INCREMENTER 1

Game::Game()
{
    Money = 0;
    MultplyMoney = 0;
}

void Game::setMoney(float m)
{
    Money = m;
}

float Game::getMoney()
{
    return Money;
}

void Game::addMoney()
{
    setMoney((getMoney()+INCREMENTER)+(INCREMENTER*getMultiplayMoney()));
}
float Game::getMultiplayMoney()
{
    return MultplyMoney;
}
void Game::setMultiplyMoney(float multplyMoney)
{
    MultplyMoney = multplyMoney;
}

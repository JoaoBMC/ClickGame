#ifndef GAME_H
#define GAME_H

class Game
{
private:
  float Money;
  float MultplyMoney;


public:
  Game();
  void setMoney(float money);
  float getMoney();
  void addMoney();
  void setMultiplyMoney(float multplyMoney);
  float getMultiplayMoney();
};

#endif // GAME_H

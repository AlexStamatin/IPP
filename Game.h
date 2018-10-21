
#ifndef Game_H
#define Game_H
#include <random>
#include <string>
#include "Army.h"
#include "UniFactory.h"
#include "TowerArmy.h"
#include "Tower.h"
#include "ChaosTower.h"
#include "UndeadUnitFactory.cpp"
#include "HumanUnitFactory.cpp"
#include "FactoryProducer.cpp"

using namespace std;

class Game
{
    string race;
    static Game* instance;
    Army UserArmy;
    Game();


public:
    static Game* getInstance();
    void buildArmy();
    void setRace(string race);
    void showArmy();
};

Game* Game::instance = 0;

Game::Game() = default;
Game* Game::getInstance()
{
    if (instance == 0)
    {
        instance = new Game();
    }

    return instance;
}

void Game::setRace(string race)
{
    this->race = race;
}



void Game::buildArmy()
{
    FactoryProducer producer;
    UnitFactory* factory = producer.GetFactory(this->race);

    this->UserArmy.addUnit(factory->spawnKnight());
    this->UserArmy.addUnit(factory->spawnArcher());
}

void Game::showArmy()
{
    cout<<UserArmy<<endl;
}

#endif // Game_H

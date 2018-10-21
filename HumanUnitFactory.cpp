#ifndef HumanUnitFactory_H
#define HumanUnitFactory_H
#include "Archer.h"
#include "Knight.h"
#include "UniFactory.h"
#include "HumanKnight.cpp"
#include "HumanArcher.cpp"
using namespace std;
class HumanUnitFactory:public UnitFactory
    {
    virtual shared_ptr<Knight> spawnKnight()
    {
        return make_shared<HumanKnight>();
    }
    virtual shared_ptr<Archer> spawnArcher()
    {
        return make_shared<HumanArcher>();
    }
    };





#endif


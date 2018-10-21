#ifndef UndeadUnitFactory_H
#define UndeadUnitFactory_H
#include "Archer.h"
#include "Knight.h"
#include "UniFactory.h"
#include "UndeadKnight.cpp"
#include "UndeadArcher.cpp"
using namespace std;
class UndeadUnitFactory:public UnitFactory
    {
    virtual shared_ptr<Knight> spawnKnight()
    {
        return make_shared<UndeadKnight>();
    }
    virtual shared_ptr<Archer> spawnArcher()
    {
        return make_shared<UndeadArcher>();
    }
    };





#endif

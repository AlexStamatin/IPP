#ifndef UnitFactory_H
#define UnitFactory_H
#include <memory>
#include "Archer.h"
#include "Knight.h"

using namespace std;
class UnitFactory
    {
        public:
    virtual shared_ptr<Knight> spawnKnight()=0;
    virtual shared_ptr<Archer> spawnArcher()=0;
    };





#endif

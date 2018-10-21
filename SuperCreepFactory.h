
#ifndef SuperCreepFactory_H
#define SuperCreepFactory_H
#include "CreepFactory.h"
#include "SuperCreep.h"

class SuperCreepFactory:public CreepFactory{

    virtual Creep* getCreep() override {
        return new SuperCreep();
    }
};

#endif


#ifndef NormalCreepFactory_H
#define NormalCreepFactory_H
#include "CreepFactory.h"
#include "NormalCreep.h"

class NormalCreepFactory:public CreepFactory{

    virtual Creep* getCreep() override {
        return new NormalCreep();
    }
};
#endif

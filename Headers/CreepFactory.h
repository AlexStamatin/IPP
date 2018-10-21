#ifndef CreepFactory_H
#define CreepFactory_H
#include "Creep.h"
#include "NormalCreep.h"
#include "SuperCreep.h"

class CreepFactory{

public:
    virtual Creep* getCreep() = 0;

};
#endif

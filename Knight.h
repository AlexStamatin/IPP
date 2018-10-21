#ifndef Knight_H
#define Knight_H
#include "AttackUnit.h"

class Knight: public AttackUnit{

public:
    virtual float attack()=0;
    virtual void takeDamage(float damage)=0;

};


#endif

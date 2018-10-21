#ifndef Archer_H
#define Archer_H
#include "AttackUnit.h"

class Archer: public AttackUnit{

public:
    virtual float attack()=0;
    virtual void takeDamage(float damage)=0;

};





#endif // Archer_H

#ifndef AttackUnit_H
#define AttackUnit_H
#include <iostream>

using namespace std;
class AttackUnit{

public:
    virtual float attack()=0;
    virtual void takeDamage(float damage)=0;
    virtual void print(ostream& out) = 0;


};

#endif

#ifndef HumanArcher_H
#define HumanArcher_H
#include "Archer.h"
#include <iostream>

class HumanArcher: public Archer{
private:
    float HP=600;
    float baseDPS = 50;
public:
    virtual float attack()
    {
        return baseDPS;
    }
    virtual void takeDamage(float damage)
    {
        this->HP -= damage;
    }

    virtual void print(ostream& out) override {

    out<<"Unit: Human Archer";
    out<<"HP: "<<HP<<endl;
    out<<"Base DPS: "<<baseDPS<<endl;

    }

    friend ostream& operator<<(ostream& out, HumanArcher& U)
    {U.print(out);return out;}

};

#endif

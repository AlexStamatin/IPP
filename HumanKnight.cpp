#ifndef HumanKnight_H
#define HumanKnight_H
#include "Knight.h"

class HumanKnight: public Knight{

private:
    float HP=500;
    float baseDPS = 100;
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

    out<<"Unit: Human Knight";
    out<<"HP: "<<HP<<endl;
    out<<"Base DPS: "<<baseDPS<<endl;

    }

    friend ostream& operator<<(ostream& out, HumanKnight& U)
    {U.print(out);return out;}


};

#endif

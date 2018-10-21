#ifndef UndeadKnight_H
#define UndeadKnight_H
#include "Knight.h"

class UndeadKnight: public Knight{
private:
    float HP=375;
    float baseDPS = 500;
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

    out<<"Unit: Undead Knight";
    out<<"HP: "<<HP<<endl;
    out<<"Base DPS: "<<baseDPS<<endl;

    }

    friend ostream& operator<<(ostream& out, UndeadKnight& U)
    {U.print(out);return out;}



};

#endif

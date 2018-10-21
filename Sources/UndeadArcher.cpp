#ifndef UndeadArcher_H
#define UndeadArcher_H
#include "Archer.h"

class UndeadArcher: public Archer{

private:
    float HP=350;
    float baseDPS = 250;
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

    out<<"Unit: Undead Archer";
    out<<"HP: "<<HP<<endl;
    out<<"Base DPS: "<<baseDPS<<endl;

    }

    friend ostream& operator<<(ostream& out, UndeadArcher& U)
    {U.print(out);return out;}


};

#endif

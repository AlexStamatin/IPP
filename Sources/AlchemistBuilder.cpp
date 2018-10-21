#ifndef AlchemistBuilder_H
#define AlchemistBUilder_H


#include "HeroBuilder.cpp"
using namespace std;


class AlchemistBuilder: public HeroBuilder{

    virtual void  BuildAgility() override {builtHero->setAgility(18.4);}
    virtual void  BuildStrength() override {builtHero->setStrength(12);}
    virtual void  BuildIntelligence() override {builtHero->setIntelligence(9.2);}
    virtual void  BuildMain_attribute() override {builtHero->setMain_attribute("Strength");}
    virtual void  BuildWeapon() override {builtHero->setWeapon("Sword");}
    virtual void  BuildMovement_speed() override {builtHero->setMove_speed(190);}

public:
    AlchemistBuilder() = default;
};

#endif

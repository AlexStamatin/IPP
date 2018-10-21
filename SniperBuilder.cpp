#include "HeroBuilder.cpp"
using namespace std;
class SniperBuilder:public HeroBuilder{

    virtual void  BuildAgility() override {builtHero->setAgility(23.2);}
    virtual void  BuildStrength() override {builtHero->setStrength(10);}
    virtual void  BuildIntelligence() override {builtHero->setIntelligence(13.4);}
    virtual void  BuildMain_attribute() override {builtHero->setMain_attribute("Agility");}
    virtual void  BuildWeapon() override {builtHero->setWeapon("Gun");}
    virtual void  BuildMovement_speed() override {builtHero->setMove_speed(220);}


};

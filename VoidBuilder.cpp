#include "HeroBuilder.cpp"
using namespace std;
class VoidtBuilder:public HeroBuilder{

    virtual void  BuildAgility() override {builtHero->setAgility(13.4);}
    virtual void  BuildStrength() override {builtHero->setStrength(14.1);}
    virtual void  BuildIntelligence() override {builtHero->setIntelligence(23.6);}
    virtual void  BuildMain_attribute() override {builtHero->setMain_attribute("Intelligence");}
    virtual void  BuildWeapon() override {builtHero->setWeapon("Hammer");}
    virtual void  BuildMovement_speed() override {builtHero->setMove_speed(175);}


};

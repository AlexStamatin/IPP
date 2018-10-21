#ifndef HeroBuilder_H
#define HeroBuilder_H


#include "Hero.cpp"
using namespace std;
class HeroBuilder{

public:
    void createHero() {builtHero = new Hero;}
    virtual void BuildAgility() = 0;
    virtual void BuildStrength() = 0;
    virtual void BuildIntelligence() = 0;
    virtual void BuildMain_attribute() = 0;
    virtual void BuildWeapon() = 0;
    virtual void BuildMovement_speed() =0;
    virtual ~ HeroBuilder() {}
    HeroBuilder() = default;
    Hero* getHero() { return builtHero;}
protected:
    Hero* builtHero;};
#endif

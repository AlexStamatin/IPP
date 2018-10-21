#ifndef HeroDirector_H
#define HeroDirector_H

#include "HeroBuilder.cpp"
#include "Hero.cpp"
using namespace std;
class HeroDirector {

private:

public:
    Hero* buildeHero(HeroBuilder* builder) {
    builder->createHero();
    builder->BuildAgility();
    builder->BuildIntelligence();
    builder->BuildStrength();
    builder->BuildMain_attribute();
    builder->BuildWeapon();
    builder->BuildMovement_speed();

    return builder->getHero();

    }
};
#endif

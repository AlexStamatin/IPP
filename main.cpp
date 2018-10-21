#include <iostream>
#include "Game.h"
#include "HeroDirector.cpp"
#include "AlchemistBuilder.cpp"
#include "HeroBuilder.cpp"
#include "HeroDirector.cpp"
#include "CreepFactory.h"
#include "Creep.h"
#include "NormalCreep.h"
#include "SuperCreep.h"
#include "NormalCreepFactory.h"
#include "SuperCreepFactory.h"

using namespace std;



class SingletonTest
{

    Game* g = Game::getInstance();
    Game* f = Game::getInstance();

public:
    void testSinlgleton(){
        cout<<g<<endl;
        cout<<f<<endl;
    if (g==f)
    {
        cout<<"Same instance"<<endl;
    }
    }
};


class PrototypeTest
{
    Tower* tow = new Tower();
    ChaosTower* chaostow = new ChaosTower();
    public:
    void testPrototype()
    {
    Tower* towclone = tow->clone();
    ChaosTower* chaosclone = chaostow->clone();
    cout<<"Tower: ";tow->print();cout<<endl;
    cout<<"Clone: ";towclone->print();cout<<endl;

    if (((*tow) == (*towclone)) && ((*chaostow) == (*chaosclone)))
    {
        cout<<"The objects are identical"<<endl;
    }
    }
};

class BuilderTest
{
    HeroDirector director;
    HeroBuilder* alchbuilder = new AlchemistBuilder();
public:
    void testBuild()
    {
        Hero* alchhero = director.buildeHero(alchbuilder);
        alchhero->presentHero();
    }
};

class AbstractFactoryTest
{   FactoryProducer producer;
    Army HumanArmy;
    Army UndeadArmy;
    UnitFactory* humanfactory = producer.GetFactory("Human");
    UnitFactory* undeadfactory = producer.GetFactory("Undead");
    public:
    void testFactory(){
    HumanArmy.addUnit(humanfactory->spawnKnight());
    HumanArmy.addUnit(humanfactory->spawnArcher());

    UndeadArmy.addUnit(undeadfactory->spawnKnight());
    UndeadArmy.addUnit(undeadfactory->spawnArcher());
    cout<<"Human Army:"<<HumanArmy<<endl;
    cout<<"Undead Army: "<<UndeadArmy<<endl; }


};

class MethodFactoryTest
{
    CreepFactory *normFact,*supFact;
    Creep *norm,*sup;
    public:
    void testMethodF()
    {
    normFact = new NormalCreepFactory();
    supFact = new SuperCreepFactory();
    norm = normFact->getCreep();
    sup = supFact->getCreep();
    cout<<"Creep 1 damage: "<<norm->explode()<<endl;
    cout<<"Creep 2 damage: "<<sup->explode()<<endl;

}
};

void TemplateTest()
{
    SingletonTest Stest;
    PrototypeTest Ptest;
    BuilderTest Btest;
    AbstractFactoryTest Atest;
    MethodFactoryTest Mtest;
    cout<<"Singleton Test: "<<endl;
    Stest.testSinlgleton();cout<<endl;
    cout<<"Prototype Test: "<<endl;
    Ptest.testPrototype();cout<<endl;
    cout<<"Builder Test: "<<endl;
    Btest.testBuild();cout<<endl;
    cout<<"Abstract Factory Test: "<<endl;
    Atest.testFactory();cout<<endl;
    cout<<"Method Factory Test: "<<endl;
    Mtest.testMethodF();cout<<endl;

};



int main()
{

    TemplateTest();

}

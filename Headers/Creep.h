#ifndef Creep_H
#define Creep_H
#include <iostream>
class Creep{

protected:
    float explodeDPS=300;
public:
    virtual float explode() = 0;
    void exdamage()
    {
    cout<<"Explosive damage: "<<this->explode()<<endl;
    }

};
#endif

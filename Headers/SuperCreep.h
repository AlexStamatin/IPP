#ifndef SuperCreep_H
#define SuperCreep_H

class SuperCreep: public Creep{

virtual float explode() override{
    return explodeDPS*4.25;
}

};
#endif

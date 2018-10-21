#ifndef NormalCreep_H
#define NormalCreep_H


class NormalCreep:public Creep{

virtual float explode() override {
    return explodeDPS*2.75;
}


};
#endif

#ifndef ChaosTower_H
#define ChaosTower_H
#include "DPSStructure.h"
using namespace std;

class ChaosTower:public DPSStructure{

    int DPS;

public:

    virtual void setDPS(int DPS){
        this->DPS = DPS;
    }

    virtual int getAverageDPS(){
        return DPS;
    }

        virtual ChaosTower* clone(){
        return new ChaosTower(*this);
    }

    virtual void print()
    {

        cout<<"Tower DPS: "<<DPS<<endl;
    }

    bool operator==(const ChaosTower& b) {

    return std::tie(DPS) == std::tie(b.DPS);
}

};

#endif


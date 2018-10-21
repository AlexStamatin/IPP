#ifndef Tower_H
#define Tower_H
#include "DPSStructure.h"
#include <tuple>
using namespace std;

class Tower: public DPSStructure{

private:

    int HP = 100;
    int GroundDPS = 200;
    int AirDPS = 50 ;

public:

    void setGroundDPS(int DPS){
        this->GroundDPS = DPS;
    }

    void setAirDPS(int DPS){
        this->AirDPS = DPS;
    }

    virtual int getAverageDPS() override
    {
        float avg = (this->GroundDPS+this->AirDPS)/2;
        return avg;
    }

    virtual Tower* clone(){
        return new Tower(*this);
    }

    virtual void print()
    {
        cout<<"Tower HP: "<<HP<<endl;
        cout<<"Air DPS: "<<AirDPS<<endl;
        cout<<"Ground DPS: "<<GroundDPS<<endl;
    }

    bool operator==(const Tower& b) {

    return std::tie(HP, GroundDPS,AirDPS) == std::tie(b.HP, b.GroundDPS,b.AirDPS);
}

};

#endif

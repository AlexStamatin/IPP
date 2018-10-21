

#ifndef TowerArmy_H
#define TowerArmy_H
#include <string>
#include <vector>
#include <memory>
#include "DPSStructure.h"
using namespace std;

class TowerArmy{
protected:

     vector<shared_ptr<DPSStructure>> Towers {} ;

public:

    virtual void addUnit(const shared_ptr<DPSStructure> &U)
    {
     this->Towers.push_back(U);
    }

TowerArmy() = default;
};

#endif

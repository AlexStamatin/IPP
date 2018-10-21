
#ifndef Army_H
#define Army_H
#include <string>
#include <vector>
#include <memory>
#include "AttackUnit.h"
using namespace std;

class Army{
protected:

     vector<shared_ptr<AttackUnit>> Units {} ;

public:

    virtual void addUnit(const shared_ptr<AttackUnit> &U)
    {
     this->Units.push_back(U);
    }

 friend ostream& operator<<(ostream& out, Army& A)
{
    for (auto i : A.Units)
        {
            (*i).print(out);
        }
    return out;
};

Army() = default;
};

#endif

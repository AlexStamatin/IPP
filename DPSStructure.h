
#ifndef DPSStructure_H
#define DPSStructure_H

class DPSStructure{

public:
    virtual int getAverageDPS() = 0;
    virtual DPSStructure* clone() = 0;
    virtual void print() = 0;

};

#endif

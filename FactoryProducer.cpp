#include "UniFactory.h"
#include "HumanUnitFactory.cpp"
#include "UndeadUnitFactory.cpp"

class FactoryProducer{

    public:
        static UnitFactory* GetFactory(string choice)
        {
            if (choice == "Human")
            {
                return new HumanUnitFactory();
            }

            if (choice == "Undead")
            {
                return new UndeadUnitFactory();
            }

            return nullptr;
        }


};

#ifndef Hero_H
#define Hero_H
#include <string>
#include <iostream>
using namespace std;

class Hero{

private:
    float agility;
    float strength;
    float intelligence;

    string main_attribute;
    string weapon;
    int movement_speed;

public:

        void setAgility(float agi) {this->agility = agi;}
        void setStrength(float str) {this->strength = str;}
        void setIntelligence(float intel) {this->intelligence = intel;}

        void setMain_attribute(string main) {this->main_attribute = main;}
        void setWeapon(string weapon) {this->weapon = weapon;}
        void setMove_speed(int movespeed) {this->movement_speed = movespeed;}


        void presentHero()
        {
            cout<<"Hero attributes: ";
            cout<<"Agility: "<<agility<<endl;
            cout<<"Strength: "<<strength<<endl;
            cout<<"Intelligence: "<<intelligence<<endl;
            cout<<"Main Attribute: "<<main_attribute<<endl;
            cout<<"Weapon: "<<weapon<<endl;
            cout<<"Movement Speed: "<<movement_speed<<endl;
        }

};

#endif

#ifndef HUMANA_CPP
#define HUMANA_CPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
        HumanA(std::string name, Weapon &weapon_);
        void attack(void);
        void set_Weapon(Weapon &weapon_);
};

#endif
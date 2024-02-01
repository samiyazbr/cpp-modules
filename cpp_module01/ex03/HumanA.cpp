#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon_) : name(name), weapon(weapon_) 
{
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
}

void HumanA::set_Weapon(Weapon &weapon_)
{
	weapon = weapon_;
}

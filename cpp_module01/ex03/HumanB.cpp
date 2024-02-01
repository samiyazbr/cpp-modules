#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) , weapon(NULL)
{
}

void HumanB::attack(void)
{	if (weapon != NULL)
    	std::cout << name << " attacks with their " << weapon->getType() <<std::endl;
	else
		std::cout << name << " There is no weapon to attack with " << std::endl;
}

void HumanB::set_Weapon(Weapon weapon_)
{
	weapon = &weapon_;
}
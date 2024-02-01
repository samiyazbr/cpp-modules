#include "ScavTrap.hpp"

int main()
{
    std::string name = "ScavTrapA";
	ScavTrap ScavTrapA(name);
	ScavTrap ScavTrapB(name);
	ScavTrapA.attack("ScavTrapB");
	ScavTrapB.beRepaired(5);
	ScavTrapB.attack("ScavTrapA");
	ScavTrapB.guardGate();
}
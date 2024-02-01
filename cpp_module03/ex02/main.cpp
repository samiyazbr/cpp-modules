#include "FragTrap.hpp"

int main()
{
    std::string name = "FragTrapA";
	std::string Name = "FragTrapB";
	FragTrap FragTrapA(name);
	FragTrap FragTrapB(Name);
	FragTrapA.attack("FragTrapB");
	FragTrapB.beRepaired(5);
	FragTrapB.attack("FragTrapA");
	FragTrapB.highFivesGuys();
}
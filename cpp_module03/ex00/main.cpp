#include "ClapTrap.hpp"

int	main()
{
    ClapTrap    default_Claptrap;
	ClapTrap	ClaptrapA("ClaptrapA");
	ClapTrap	ClaptrapB("ClaptrapB");

	ClapTrap	ClapTrapC(ClaptrapB);


	std::cout << "1) ";
    ClaptrapA.attack("ClaptrapB");
    std::cout << "2) ";
    ClaptrapA.attack("ClaptrapB");
    std::cout << "3) ";
	ClaptrapA.attack("ClaptrapB");
    std::cout << "4) ";
	ClaptrapA.attack("ClaptrapB");
    std::cout << "5) ";
	ClaptrapA.attack("ClaptrapB");
    std::cout << "6) ";
	ClaptrapA.attack("ClaptrapB");
    std::cout << "7) ";
	ClaptrapA.attack("ClaptrapB");
    std::cout << "8) ";
	ClaptrapA.attack("ClaptrapB");
    std::cout << "9) ";
	ClaptrapA.attack("ClaptrapB");
    //std::cout << "10) ";
	//ClaptrapA.attack("ClaptrapB");

    ClaptrapA.beRepaired(5);
    std::cout << "Hit points After Repair: " <<  ClaptrapA.get_Hit_Points() << std::endl;
    ClaptrapA.takeDamage(3);
    std::cout << "Hit points After taking the damage: " << ClaptrapA.get_Hit_Points() << std::endl;

	return (0);
}
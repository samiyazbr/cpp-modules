#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
	: ClapTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	set_Hit_points(100);
	set_Energy_Points(50);
	set_Attack_Damage(20);
}

ScavTrap::ScavTrap(ScavTrap &copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::ScavTrap(std::string &name)
	: ClapTrap(name)
{
	std::cout << "ScavTrap name constructor called" << std::endl;
	set_Hit_points(100);
	set_Energy_Points(50);
	set_Attack_Damage(20);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "ScavTrap copy assignment constructor called" << std::endl;
	if (&rhs == this) // Check for self-assignment
		return (*this);
	this->set_Attack_Damage(rhs.get_Attack_Damage());
	this->set_Energy_Points(rhs.get_Energy_Points());
	this->set_Hit_points(rhs.get_Hit_Points());
	this->set_Name(rhs.get_Name());
	return (*this); // Return a reference to the left-hand side object (*this)
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << get_Name() << " is now in gatekeeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (get_Energy_Points() > 0)
    {
        std::cout << this->get_Name() << " has attacked " << target << ", " << "causing " << this->get_Attack_Damage() << " points of damage!" << std::endl;
        set_Energy_Points(get_Energy_Points() - 1);
    }
}

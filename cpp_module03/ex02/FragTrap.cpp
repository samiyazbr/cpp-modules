#include "FragTrap.hpp"

FragTrap::FragTrap(void)
	: ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	set_Hit_points(100);
	set_Energy_Points(100);
	set_Attack_Damage(30);
}

FragTrap::FragTrap(const FragTrap &copy)
	: ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap::FragTrap(const std::string &name)
	: ClapTrap(name)
{
	std::cout << "FragTrap name constructor called" << std::endl;
	set_Hit_points(100);
	set_Energy_Points(100);
	set_Attack_Damage(30);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	std::cout << "FragTrap copy assignment constructor called" << std::endl;
	if (&rhs == this) // Check for self-assignment
		return (*this);
	this->set_Attack_Damage(rhs.get_Attack_Damage());
	this->set_Energy_Points(rhs.get_Energy_Points());
	this->set_Hit_points(rhs.get_Hit_Points());
	this->set_Name(rhs.get_Name());
	return (*this); // Return a reference to the left-hand side object (*this)
}

void FragTrap::highFivesGuys(void)
{
	std::cout << get_Name() << " has requested high fives..." << std::endl;
}

void FragTrap::Attack(std::string const & target)
{
    if (get_Energy_Points() > 0)
    {
        std::cout << this->get_Name() << " has attacked " << target << ", " << "causing " << this->get_Attack_Damage() << " points of damage!" << std::endl;
        set_Energy_Points(get_Energy_Points() - 1);
    }
}
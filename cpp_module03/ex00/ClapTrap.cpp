#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :	Name(),
						Hit_Points(10),
						Energy_Points(10),
						Attack_Damage(0)
{
	std::cout << "Default CLAPTRAP constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) :  Name(Name),
										Hit_Points(10),
										Energy_Points(10),
										Attack_Damage(0)
{
	std::cout << "CLAPTRAP constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : Name(copy.Name), Hit_Points(copy.Hit_Points),
                                        Energy_Points(copy.Energy_Points), Attack_Damage(copy.Attack_Damage)
{
	std::cout << "CLAPTRAP copy contructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAPTRAP destructor called" << std::endl;
}

const std::string	&ClapTrap::get_Name() const
{
	return (Name);
}

void		ClapTrap::set_Name(const std::string &Name_)
{
	Name = Name_;
}

const int			&ClapTrap::get_Hit_Points() const
{
	return (Hit_Points);
}

void		ClapTrap::set_Hit_points(int HitPoints)
{
	Hit_Points = HitPoints;
}

const int			&ClapTrap::get_Energy_Points() const
{
	return (Energy_Points);
}

void		ClapTrap::set_Energy_Points(int EnergyPoints)
{
	Energy_Points = EnergyPoints;
}

const int			&ClapTrap::get_Attack_Damage() const
{
	return (Attack_Damage);
}

void		ClapTrap::set_Attack_Damage(int AttackDamage)
{
	Attack_Damage = AttackDamage;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &clapTrap2)
{
	if (this != &clapTrap2)
	{
		std::cout << "CLAPTRAP assignment operator called" << std::endl;
		Name = clapTrap2.Name;
		Hit_Points = clapTrap2.Hit_Points;
		Energy_Points = clapTrap2.Energy_Points;
		Attack_Damage = clapTrap2.Attack_Damage;
	}
	return (*this);
}


void	ClapTrap::attack(std::string const & target)
{
    if (Energy_Points > 0 && Hit_Points > 0)
    {
        std::cout << Name << " has attacked " << target << ", " \
        << "causing " << Attack_Damage << " points of damage!" << std::endl;
        Hit_Points--;
        Energy_Points--;
    }
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_Points > 0 && Energy_Points > 0)
    {
        std::cout << Name << " has lost " \
        << amount << " Hit points." << std::endl;
        Hit_Points -= amount;
    }
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (Energy_Points > 0 && Hit_Points > 0)
    {
        std::cout << Name << " has recovered " \
        << amount << " Hit points" << std::endl;
        Hit_Points += amount;
        Energy_Points--;
    }
}
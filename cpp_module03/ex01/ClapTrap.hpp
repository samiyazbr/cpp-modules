#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	private:

		std::string	Name;
		int			Hit_Points;
		int			Energy_Points;
		int			Attack_Damage;
	
	public:

		ClapTrap();
		ClapTrap(std::string Name);
		ClapTrap(ClapTrap &clapTrap);
		~ClapTrap();

		const std::string			&get_Name() const;
		void				set_Name(const std::string &Name_);
		const int					&get_Hit_Points() const;
		void				set_Hit_points(int HitPoints);
		const int					&get_Energy_Points() const;
		void				set_Energy_Points(int EnergyPoints);
		const int					&get_Attack_Damage() const;
		void				set_Attack_Damage(int AttackDamage);

		ClapTrap			&operator=(ClapTrap const &clapTrap2);

		void				attack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
};


#endif
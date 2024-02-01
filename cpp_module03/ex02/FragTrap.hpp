#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
    FragTrap(void);
    FragTrap(const std::string &name);
    FragTrap(const FragTrap& copy);
    FragTrap& operator=(const FragTrap& copy);
    ~FragTrap(void);
    
    void highFivesGuys(void);
    void Attack(const std::string& target);
};
#endif
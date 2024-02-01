#include "zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
    this->name = "default";
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " << name << "is Destroyed!" << std::endl;
}

void Zombie::set_name(std::string &name)
{
    this->name = name;
}
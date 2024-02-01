#include "zombie.hpp"

void Zombie::randomChump(std::string name)
{
    Zombie Zom(name);
    Zom.announce();
}
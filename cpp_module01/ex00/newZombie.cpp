#include "zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    return (new Zombie(name));
}

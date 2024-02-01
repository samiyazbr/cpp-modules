#include "zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name)
{
    Zombie *Zombie_Horde;
    Zombie_Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Zombie_Horde[i].set_name(name);
    }
    
    return (Zombie_Horde);
}
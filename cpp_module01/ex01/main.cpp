#include "zombie.hpp"

int main(void)
{
    int N;
    Zombie ZH;

    std::cout << "Enter the number of zombies: ";
    std::cin >> N;
    Zombie *zombie_horde = ZH.zombieHorde(N, "Zombie_Horde");
    std::cout << "Announcing every Zombies...." << std::endl;
    for (int i = 0; i < N; i++)
    {
        std::cout << i + 1 << ") ";
        zombie_horde[i].announce();
    }
    std::cout << "Deleting every Zombies...." << std::endl;
    delete[] zombie_horde;
    return 0;
}
#include "PhoneBook.hpp"

void display_command(void)
{
    std::cout << "Enter a Command" << std::endl;
    std::cout << "1. ADD" << std::endl;
    std::cout << "3. SEARCH" << std::endl;
    std::cout << "2. EXIT" << std::endl;
}

int main(void)
{
    std::string cmd;
    PhoneBook pb;

    display_command();
    std::cin >> cmd;
    while (cmd != "EXIT" && std::cin)
    {
        if (cmd == "ADD")
            pb.add_contact();
        if (cmd == "SEARCH")
            pb.search_contact();
        display_command();
        std::cin >> cmd;
    }
    return (0);
}
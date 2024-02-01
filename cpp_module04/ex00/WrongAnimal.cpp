#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    this->Type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) : Type(type)
{
    std::cout << "WrongAnimal name constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this != &rhs)
        this->Type = rhs.Type;
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->Type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}
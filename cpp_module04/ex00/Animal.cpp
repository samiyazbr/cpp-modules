#include "Animal.hpp"

Animal::Animal() : Type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : Type(type)
{
    std::cout << "Animal name constructor called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &rhs)
        this->Type = rhs.Type;
    return (*this);
}

std::string Animal::get_Type() const
{
    return (this->Type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
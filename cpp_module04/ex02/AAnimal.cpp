#include "AAnimal.hpp"

AAnimal::AAnimal() : Type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : Type(type)
{
    std::cout << "Animal name constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &rhs)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &rhs)
        this->Type = rhs.Type;
    return (*this);
}

std::string AAnimal::get_Type() const
{
    return (this->Type);
}

void AAnimal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}
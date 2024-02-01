#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->Type = "Dog";
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &rhs)
        this->Type = rhs.Type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof! woof!" << std::endl;
}
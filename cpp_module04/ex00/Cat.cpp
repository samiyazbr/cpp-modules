#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->Type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &rhs)
        this->Type = rhs.Type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meow! meow!" << std::endl;
}
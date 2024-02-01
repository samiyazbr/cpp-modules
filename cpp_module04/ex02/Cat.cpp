#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat default constructor called" << std::endl;
    this->Type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(Cat const &copy) : AAnimal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    if (this!= &copy)
    {
        this->Type = copy.Type;
        this->brain = new Brain(*copy.brain);
    }
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat & Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->Type = rhs.Type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "meow! meow!" << std::endl;
}

Brain *Cat::get_Brain() const
{
    return (this->brain);
}
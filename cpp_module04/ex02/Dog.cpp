#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
    this->Type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(Dog const & copy) : AAnimal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    if (this != &copy)
    {
        this->Type = copy.Type;
        this->brain = new Brain(*copy.brain);
    }
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog & Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->Type = rhs.Type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*rhs.brain);
    }
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof! woof!" << std::endl;
}

Brain *Dog::get_Brain() const
{
    return (this->brain);
}
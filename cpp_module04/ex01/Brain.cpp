#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->Ideas[i] = "idea";
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & src)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &src)
    {
        for (int i = 0; i < 100; i++)
            this->Ideas[i] = src.get_Idea(i);
    }
    return (*this);
}

std::string const & Brain::get_Idea(int index) const
{
    return (this->Ideas[index]);
}

void Brain::set_Idea(int index, std::string idea)
{
    this->Ideas[index] = idea;
}
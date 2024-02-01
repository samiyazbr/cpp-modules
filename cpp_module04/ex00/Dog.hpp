#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &copy);
        ~Dog();
        Dog & operator=(Dog const &rhs);
        void makeSound() const;
};

#endif
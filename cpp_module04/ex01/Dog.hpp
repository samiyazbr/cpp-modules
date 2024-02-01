#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        Dog(Dog const &copy);
        ~Dog();
        Dog & operator=(Dog const &rhs);
        void makeSound() const;
        Brain *get_Brain() const;
};

#endif
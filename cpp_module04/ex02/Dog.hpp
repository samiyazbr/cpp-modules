#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public AAnimal
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
#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        Cat(Cat const &copy);
        ~Cat();
        Cat &operator=(Cat const &rhs);
        void makeSound() const;
        Brain *get_Brain() const;
};

#endif
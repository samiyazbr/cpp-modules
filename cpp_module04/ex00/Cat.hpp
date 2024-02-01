#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &copy);
        ~Cat();
        Cat &operator=(Cat const &rhs);
        void makeSound() const;
};

#endif
#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

class Cat : public AAnimal
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
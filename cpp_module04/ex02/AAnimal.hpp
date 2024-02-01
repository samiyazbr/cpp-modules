#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
        std::string Type;
    public:
        AAnimal();
        AAnimal(std::string type);
        AAnimal(AAnimal const &copy);
        virtual ~AAnimal(); //virtual keyword is used to avoid memory leak
        AAnimal &operator=(AAnimal const &rhs);
        std::string get_Type() const;
        virtual void makeSound() const = 0; // pure virtual (only allows the inherited class to use this function)
};

#endif
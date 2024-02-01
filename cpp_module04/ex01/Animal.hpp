#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string Type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const &copy);
        virtual ~Animal(); //virtual keyword is used to avoid memory leak
        Animal &operator=(Animal const &rhs);
        std::string get_Type() const;
        virtual void makeSound() const;
};

#endif
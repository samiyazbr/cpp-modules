#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string Type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal();
        WrongAnimal & operator=(WrongAnimal const &rhs);
        std::string getType() const;
        void makeSound() const;
};

#endif
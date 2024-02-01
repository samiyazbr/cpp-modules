#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << meta->get_Type() << " " << std::endl;
    std::cout << j->get_Type() << " " << std::endl;
    std::cout << i->get_Type() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    {
        const WrongAnimal* meta = new WrongAnimal();
        const WrongAnimal* i = new WrongCat();

        std::cout << std::endl;

        std::cout << i->getType() << " " << std::endl;

        std::cout << std::endl;

        i->makeSound(); //will output the animal sound!
        meta->makeSound();

        std::cout << std::endl;

        delete meta;
        delete i;
    }
    return (0);
}
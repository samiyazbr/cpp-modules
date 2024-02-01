#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;

    // Create a Cat and a Dog
    Cat cat;
    Dog dog;

    // Create some ideas for the cat's brain
    cat.get_Brain()->set_Idea(0, "Catch a mouse");
    cat.get_Brain()->set_Idea(1, "Sleep in the sun");

    // Create some ideas for the dog's brain
    dog.get_Brain()->set_Idea(0, "Fetch a ball");
    dog.get_Brain()->set_Idea(1, "Go for a walk");

    // Make the Cat and Dog objects make sounds
    cat.makeSound();
    dog.makeSound();

    // Print the ideas from both Cat and Dog brains
    for (int i = 0; i < 2; ++i)
    {
        std::cout << "Cat's Brain Idea " << i << ": " << cat.get_Brain()->get_Idea(i) << std::endl;
        std::cout << "Dog's Brain Idea " << i << ": " << dog.get_Brain()->get_Idea(i) << std::endl;
    }

    // Modify an idea in the Cat's brain
    cat.get_Brain()->set_Idea(1, "Dream of chasing birds");

    // Modify an idea in the Dog's brain
    dog.get_Brain()->set_Idea(0, "Play with a frisbee");

    // Print the modified ideas
    std::cout << "Cat's New Idea 1: " << cat.get_Brain()->get_Idea(1) << std::endl;
    std::cout << "Dog's New Idea 0: " << dog.get_Brain()->get_Idea(0) << std::endl;

    return 0;
}

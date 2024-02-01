#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    private:
        std::string Ideas[100];
    public:
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        Brain & operator=(Brain const &rhs);
        std::string const & get_Idea(int index) const;
        void set_Idea(int index, std::string idea);
};

#endif
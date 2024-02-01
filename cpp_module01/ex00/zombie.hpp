/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samiyazubair <samiyazubair@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:25:51 by samiyazubai       #+#    #+#             */
/*   Updated: 2023/07/05 21:25:53 by samiyazubai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <stdio.h>
#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        void announce( void );
        ~Zombie(void);
        Zombie* newZombie(std::string name);
        void randomChump( std::string name );
};

#endif
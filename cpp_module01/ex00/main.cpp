/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samiyazubair <samiyazubair@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:25:39 by samiyazubai       #+#    #+#             */
/*   Updated: 2023/07/05 21:25:41 by samiyazubai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "zombie.hpp"

int main(void)
{
    Zombie stackzombie("stack zombie");
    stackzombie.announce();
    stackzombie.randomChump("RandomChump");
    Zombie *heapzombie = stackzombie.newZombie("Heap Zombie");
    heapzombie->announce();
    delete heapzombie;
    return 0;
}
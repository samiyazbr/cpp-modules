/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:51:09 by szubair           #+#    #+#             */
/*   Updated: 2023/08/31 13:51:11 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout <<"Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::Fixed(const int Integer)
{
	std::cout << " Int constructor called" << std::endl;
	this->fixed_point = (Integer << Fixed::fractional);
}

Fixed::Fixed(const float Floating_point)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = std::roundf(Floating_point * (1 << Fixed::fractional));

}

const int Fixed::fractional = 8;

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		fixed_point = rhs.getRawBits();
	}
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (float)(1 << Fixed::fractional));
}

int Fixed::toInt(void) const
{
	return (this->fixed_point >> Fixed::fractional);
}

std::ostream & operator<<(std::ostream & os, Fixed const & fixed_Point)
{
	os << fixed_Point.toFloat();
	return os;
}

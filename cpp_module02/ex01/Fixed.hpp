/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:51:13 by szubair           #+#    #+#             */
/*   Updated: 2023/08/31 13:51:15 by szubair          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixed_point;
		static const int fractional;
	public:
		Fixed();
		Fixed(const int Integer);
		Fixed(const float Floating_point);
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const &fixed_Point);

#endif
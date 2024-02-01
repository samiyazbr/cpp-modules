/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szubair <szubair@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:51:53 by szubair           #+#    #+#             */
/*   Updated: 2023/08/31 13:51:55 by szubair          ###   ########.fr       */
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
		~Fixed();
		Fixed(const Fixed &copy);
		int getRawBits( void ) const;
		void setRawBits( int const raw);
		Fixed(const int Integer);
		Fixed(const float Floating_point);
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed &operator=(const Fixed &rhs);

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);

		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static Fixed const &min(Fixed const &fixed_point1, Fixed const &fixed_point2);
		static Fixed &min(Fixed &fixed_point1, Fixed &fixed_point2);
		static Fixed const &max(Fixed const &fixed_point1, Fixed const &fixed_point2);
		static Fixed &max(Fixed &fixed_point1, Fixed &fixed_point2);

};

std::ostream& operator<<(std::ostream& os, Fixed const &fixed_Point);

#endif
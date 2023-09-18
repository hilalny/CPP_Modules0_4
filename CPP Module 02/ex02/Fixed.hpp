/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:25:09 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/18 12:17:19 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int	fixed_value;
		static const int fractional_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int fp_value);
		Fixed(const float fp_value);
		~Fixed();
		Fixed	&operator=(Fixed const& fixed);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		Fixed	operator+(Fixed const& fixed);
		Fixed	operator-(Fixed const& fixed);
		Fixed	operator*(Fixed const& fixed);
		Fixed	operator/(Fixed const& fixed);
		bool	operator>(Fixed const& fixed)const;
		bool	operator>=(Fixed const& fixed)const;
		bool	operator<(Fixed const& fixed)const;
		bool	operator<=(Fixed const& fixed)const;
		bool 	operator!=(Fixed const& fixed)const;
		bool	operator==(Fixed const& fixed)const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);		
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	&min(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed& a, const Fixed& b);
		const static Fixed	&min(const Fixed& a, const Fixed& b);
};

std::ostream &operator<<(std::ostream &o, const Fixed& fixed);

#endif

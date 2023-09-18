/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:24:44 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/14 18:51:13 by hyolasig         ###   ########.fr       */
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
		Fixed &operator=(Fixed const& fixed); 
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);		
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, const Fixed& fixed);

#endif

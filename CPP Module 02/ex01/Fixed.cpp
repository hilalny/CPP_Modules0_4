/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 21:24:40 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/18 11:32:14 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default Constructor Called\n";
	this->fixed_value = 0;
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy Constructor Called\n";
	*this = copy;
}

Fixed::Fixed(const int fp_value) {
	std::cout << "Int constructor called\n";
	this->fixed_value = (fp_value * (1 << this->fractional_bits));
}

Fixed::Fixed(const float fp_value) {
	std::cout << "Float constructor called\n";
	this->fixed_value = roundf(fp_value * (1 << this->fractional_bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor Called\n";
}

Fixed	&Fixed::operator=(Fixed const& fixed) {
	std::cout << "Copy assignment operator called\n";
	if (this != &fixed)
		this->fixed_value = fixed.fixed_value;
	return (*this);
}

int	Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->fixed_value);
}

void	Fixed::setRawBits(int const raw) {
	this->fixed_value = raw;	
}

float	Fixed::toFloat(void) const {
	return ((float)this->fixed_value / (float)(1 << this->fractional_bits));
}

int	Fixed::toInt(void) const {
	return (this->fixed_value / (1 << this->fractional_bits));
}

std::ostream &operator<<(std::ostream &o, const Fixed& fixed) {
	o << fixed.toFloat();
	return (o);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:33:03 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/13 10:24:02 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fp = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->fp = value << this->fb;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->fp = roundf(value * (1 << this->fb));
}

Fixed::Fixed(const Fixed& pf)
{   
    std::cout << "Copy constructor called" << std::endl;
    *this = pf;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &copy)
        return *this;
    this->fp = copy.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp);
}

void Fixed::setRawBits(int const raw)
{
      fp = raw;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->fp / (float)(1 << this->fb));
}

int	Fixed::toInt(void)const
{
	return (this->fp >> this->fb);
}

std::ostream &operator<<(std::ostream &ofs, Fixed const &fixed)
{
	return (ofs << fixed.toFloat());
}
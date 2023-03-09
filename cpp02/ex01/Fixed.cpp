#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "default constructor is called" << std::endl;
    fp = 0;
}

Fixed::~Fixed()
{
    std::cout << "Bye! Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& pf)
{
    
    std::cout << "copy constructor is called" << std::endl;
    *this = pf;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fp);
}

void Fixed::setRawBits(int const raw )
{
      fp = raw;
}


Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "copy assignment op called" << std::endl;
    if (this == &copy)
        return *this;
    this->fp = copy.getRawBits();
    return *this;
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr)
{
	return (str << fixed_nbr.toFloat());
}

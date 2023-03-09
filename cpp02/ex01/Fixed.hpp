#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed{
    private :
    int fp;
    static const int fb = 8;

    public :
    Fixed();
    Fixed(const int fp);
    Fixed(const float fp);
    Fixed(const Fixed& pf);
    ~Fixed();
    
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed &operator=(const Fixed &copy);
    float toFloat() const;
    int toInt() const;
};
std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nbr);


#endif


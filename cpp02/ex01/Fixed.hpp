/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:33:13 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/13 13:07:09 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed{
    private :
    int fp;
    static const int fb = 8;

    public :

    Fixed();
    Fixed(const int value);
    Fixed(const float value);
    Fixed(const Fixed& pf);
    Fixed &operator=(const Fixed &copy);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat() const;
    int toInt() const;

};

std::ostream &operator<<(std::ostream &ofs, Fixed const& fixed);


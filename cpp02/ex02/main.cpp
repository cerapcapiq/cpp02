/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 10:46:50 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/13 13:32:19 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() 
{
    Fixed a;
    Fixed const b( Fixed(5.05f) * Fixed(2));
 
    std::cout << "a is " << a << std::endl;
    std::cout << "++a is " << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << "a++ is " << a++ << std::endl;
    std::cout << "now after a++ is " << a << std::endl;
    std::cout << b << std::endl;
    
    /*
    float z = 0.0f;
    ++z;
    std::cout << "value of z is: " << z << std::endl;

    Fixed c = 2;
    Fixed d = 2.5f;
    Fixed e = 2;
    Fixed j = c < d;
    std::cout << c + c << std::endl;  
    std::cout << c + d << std::endl; // ---> c.add(d);
    std::cout << c - d << std::endl;
    std::cout << c * c << std::endl;
    std::cout << c / c << std::endl;
    std::cout << "j is " << j << std::endl;
    std::cout << "is e bigger " << (d < e) << std::endl;
    std::cout << "is same or bigger e " << (c <= e) << std::endl;
    std::cout << Fixed::max(c, e) << std::endl; 
    */

    std::cout << Fixed::max(a, b) << std::endl;

    return 0;
}
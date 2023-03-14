/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:34:30 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/14 13:19:31 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


Point::Point() : x(0), y(0)
{

}

Point::Point(const float x, const float y)  : x(x), y(y)
{

}

Point::Point(const Point& point): x(point.getX()), y(point.getY())
{   
    //std::cout << "Copy constructor called" << std::endl;
    *this = point;
}

Point &Point::operator=(const Point &copy)
{
    //std::cout << "Copy assignment operator called" << std::endl;
    if (this != &copy)
		return (*this);
    return *this;
}


Point::~Point()
{

}


const Fixed	&Point::getX(void) const
{
	return (this->x);
}

const Fixed	&Point::getY(void) const
{
	return (this->y);
}

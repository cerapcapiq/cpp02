/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:34:27 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/14 13:19:39 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include "Fixed.hpp"

class Point{
    private :
    const Fixed x;
    const Fixed y;

    public :
        Point();
        Point(const float x, const float y);

        Point(const Point &point);
        Point &operator=(const Point &copy);
        ~Point();

    const Fixed &getX() const;
    const Fixed &getY() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
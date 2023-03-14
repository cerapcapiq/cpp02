/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:34:34 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/14 13:44:41 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

/* A utility function to calculate area of triangle formed by (x1, y1),
   (x2, y2) and (x3, y3) */
float area(Point A, Point B, Point C)
{
    float area;
  
    area = (
        (A.getX().toFloat() * (B.getY().toFloat() - C.getY().toFloat())) 
    + (B.getX().toFloat() * (C.getY().toFloat() - A.getY().toFloat()))
    + (C.getX().toFloat() * (A.getY().toFloat()- B.getY().toFloat()))
    )
    /2.0;

    if (area < 0)
        area = (area * -1);
    return area;
}


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float A = area(a, b, c);
    float B = area(point, b, c);
    float C = area(a, point, c);
    float D = area(a, b, point);

    std::cout << A << std::endl;
    std::cout << B << std::endl;
    std::cout << C << std::endl;
    std::cout << D << std::endl;

    if (B + C + D == A)
        return 1;
    else if ( B == 0 || C == 0 || D == 0)
        return 0;
    else
        return 0;
}
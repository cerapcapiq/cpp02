/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasarud <abasarud@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:34:37 by abasarud          #+#    #+#             */
/*   Updated: 2023/03/14 13:41:24 by abasarud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
  

int main()
{
   /* whether P(10, 15) lies inside the triangle
       A(0, 0), B(20, 0) C(10, 30)

 Point a(-1.5, -1.5);
	Point b(2.5, 2.5);
	Point c(-1, -2);
	Point point(8.5, -9);
   */

      
   

   Point a(2, 0);
   Point b(8, 0);
   Point c(8, 6);
   Point point(6, 2);

  


   if (bsp(a, b, c, point))
     std::cout <<"Inside" << std::endl;
   else
     std::cout <<"Not Inside" << std::endl;;
  
   return 0;
}
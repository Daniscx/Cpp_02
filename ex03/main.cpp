/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:26:14 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/03 16:48:28 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#
#include "Point.h"

int main( void ) {
    Point const a(0, 0);
    Point const b(10, 0);
    Point const c(0, 10);
    Point const point(-23250, 20);

    if (bsp(a, b, c, point))
        std::cout << "Point is inside the triangle." << std::endl;
    else
        std::cout << "Point is outside the triangle." << std::endl;

    return 0;
}
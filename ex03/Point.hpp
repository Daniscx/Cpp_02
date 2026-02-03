/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:03:51 by dmaestro          #+#    #+#             */
/*   Updated: 2026/02/03 15:46:38 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
   private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(float x ,float y);
        Point(const Point& other);
        Point
            operator=(const Point& other);
        ~Point();
        Fixed getX() const;
        Fixed getY() const;
};

#endif

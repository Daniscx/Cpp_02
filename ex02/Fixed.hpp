/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:03:33 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/30 17:49:56 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <string>
#include "stdlib.h"
#include "iostream"
#include <cctype>
#include <cstring>
#include <fcntl.h>
#include <unistd.h>
#include <cmath>
#define EPSILON 1.0e-7

class Fixed
{
    private:
        int value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed(const float value);
        Fixed(const int value);
        ~Fixed();
        Fixed& 
            operator=(const Fixed& other);
        Fixed& 
            operator+(const Fixed& other);
        Fixed& 
            operator-(const Fixed& other);
        Fixed& 
            operator*(const Fixed& other);
        Fixed& 
            operator/(const Fixed& other);
        Fixed& 
            operator--();
        Fixed& 
            operator++();
        Fixed  
            operator--(int);
        Fixed  
            operator++(int);
        bool   
            operator==(const Fixed& fixed);
        bool   
            operator>=(const Fixed& fixed);
        bool   
            operator<=(const Fixed& fixed);
        bool   
            operator<(const Fixed& fixed);
        bool   
            operator>(const Fixed& fixed);
        bool   
            operator!=(const Fixed& fixed);
       static  Fixed&
            min(const Fixed& a, const Fixed &b);
       static  Fixed&
            max(const Fixed& a, const Fixed &b);
       static  Fixed
            min(Fixed a, Fixed b);
       static  Fixed
            max(Fixed a, Fixed b);
        

        
        
    float
        toFloat(void) const;
    int 
        toInt(void) const;
    int 
        getRawBits() const;
    void 
        setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif 
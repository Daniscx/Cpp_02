/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:03:33 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/27 19:29:07 by dmaestro         ###   ########.fr       */
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
        Fixed& operator=(const Fixed& other);
        Fixed& operator+(const Fixed& other);
        Fixed& operator-(const Fixed& other);
        Fixed& operator*(const Fixed& other);
        Fixed& operator/(const Fixed& other);
    float
        toFloat(void) const;
    int 
        toInt(void) const;
    int 
        getRawBits();
    void 
        setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
std::ostream& operator<(std::ostream& os, const Fixed& fixed);
std::ostream& operator<=(std::ostream& os, const Fixed& fixed);
std::ostream& operator>(std::ostream& os, const Fixed& fixed);
std::ostream& operator>=(std::ostream& os, const Fixed& fixed);
std::ostream& operator==(std::ostream& os, const Fixed& fixed);
#endif
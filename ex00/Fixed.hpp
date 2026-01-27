/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 18:03:33 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/27 18:23:38 by dmaestro         ###   ########.fr       */
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
class Fixed
{
    private:
        int value;
        static const int fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed& other);
        ~Fixed();
        Fixed& operator=(const Fixed& other);
    int 
        getRawBits();
    void 
        setRawBits(int const raw);
};

#endif
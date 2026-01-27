/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:54:20 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/27 18:25:37 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed()
{
    std::cout << "Default construction called" << std::endl;
    this->value = 0;
}
 Fixed& Fixed::operator=(const Fixed& other)
{
    this->value = other.value;
    return(*this);
}
int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->value);
}
void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
   *this = other;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

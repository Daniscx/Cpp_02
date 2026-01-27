/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42madrid.con    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:54:20 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/27 19:29:40 by dmaestro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed()
{
    std::cout << "Default construction called" << std::endl;
    this->value = 0;
}
Fixed::Fixed(int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << fractional_bits;
}
Fixed::Fixed(float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)(value * (1 << fractional_bits));
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
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    std::cout << fixed.toFloat();
    return(os);
    
}
int Fixed::toInt() const
{
    int result;
    int aux;
    int aux2;
    aux2 = this->value;
    aux = this->fractional_bits;
    result = aux2 >> aux;
    return(result);
}
float Fixed::toFloat() const
{
    float result;
    float aux;
    float aux2;
    aux2 = this->value;
    aux = this->fractional_bits;
    result = aux2 / (1 << (int)aux);
    return(result);
    
}
Fixed& Fixed::operator+(const Fixed& other)
{
    Fixed* result = new Fixed();
    result->setRawBits(this->getRawBits() + other.getRawBits());
    return(*result);
}

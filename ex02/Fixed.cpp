/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmaestro <dmaestro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:54:20 by dmaestro          #+#    #+#             */
/*   Updated: 2026/01/30 17:52:15 by dmaestro         ###   ########.fr       */
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

int Fixed::getRawBits() const
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
    Fixed result;
    Fixed *aux;
    aux = new Fixed();
    *aux = other;  
    result = Fixed();
    result.setRawBits(this->getRawBits() + aux->getRawBits());
    delete aux;
    return(result);
}
Fixed& Fixed::operator*(const Fixed& other)
{
    Fixed result;
    Fixed *aux;
    aux = new Fixed();
    *aux = other;  
    result = Fixed();
    result.setRawBits(this->getRawBits() * aux->getRawBits());
    delete aux;
    return(result);
}

Fixed& Fixed::operator-(const Fixed& other)
{
    Fixed result;
    Fixed *aux;
    aux = new Fixed();
    *aux = other;  
    result = Fixed();
    result.setRawBits(this->getRawBits() - aux->getRawBits());
    delete aux;
    return(result);
}

Fixed& Fixed::operator*(const Fixed& other)
{
    Fixed result;
    Fixed *aux;
    aux = new Fixed();
    *aux = other;  
    result = Fixed();
    result.setRawBits(this->getRawBits() / aux->getRawBits());
    delete aux;
    return result;
}
Fixed& Fixed::operator--()
{
    this->setRawBits(this->getRawBits() - (1 + EPSILON));
}
Fixed& Fixed::operator++()
{
    this->setRawBits(this->getRawBits() + (1 + EPSILON));
}

Fixed Fixed::operator--(int)
{
    this->setRawBits(this->getRawBits() - (1 + EPSILON));
}

Fixed Fixed::operator++(int)
{ 
    this->setRawBits(this->getRawBits() - (1 + EPSILON));
}

bool   Fixed::operator==(const Fixed& fixed)
{
    
    if(this->getRawBits() == fixed.getRawBits())
        return(true);
    else 
        return(false);
}
bool   Fixed::operator>=(const Fixed& fixed)
{
    
    if(this->getRawBits() >= fixed.getRawBits())
        return(true);
    else 
        return(false);
}
bool   Fixed::operator<=(const Fixed& fixed)
{
    
    if(this->getRawBits() <= fixed.getRawBits())
        return(true);
    else 
        return(false);
}

bool   Fixed::operator<(const Fixed& fixed)
{
    
    if(this->getRawBits() < fixed.getRawBits())
        return(true);
    else 
        return(false);
}

bool   Fixed::operator>(const Fixed& fixed)
{
    
    if(this->getRawBits() > fixed.getRawBits())
        return(true);
    else 
        return(false);
}

bool   Fixed::operator!=(const Fixed& fixed)
{
    
    if(this->getRawBits() != fixed.getRawBits())
        return(true);
    else 
        return(false);
}
 Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    Fixed result;

    if(&a > &b)
        result = a;
    else
        result = b;
        return(result);
}
 Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    Fixed result;

    if(&a < &b)
        result = a;
    else
        result = b;
        return(result);
}
Fixed Fixed::max(Fixed a, Fixed b)
{
    Fixed result;

    if(&a > &b)
        return(a);
    else
        return(b);
}

Fixed Fixed::min(Fixed a, Fixed b)
{
    Fixed result;

    if(&a > &b)
        return(a);
    else
        return(b);
}





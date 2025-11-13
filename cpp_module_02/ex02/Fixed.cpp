/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:21:58 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/13 22:12:32 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int  Fixed::NbrOfFractional = 8;

Fixed::Fixed() { 
    FixedPointNumber = 0;
    // std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed& obj)
{
    FixedPointNumber = obj.FixedPointNumber;
    // std::cout << "copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    this->FixedPointNumber = other.FixedPointNumber;
    // std::cout << "Copy assignment operator called\n";
    return *this;
}

Fixed::Fixed(const float Num)
{
    // std::cout << "Float constructor called\n";
    FixedPointNumber = roundf(Num * 256);
}

Fixed::Fixed(const int Num)
{
    // std::cout << "Int constructor called\n";
    FixedPointNumber = Num << NbrOfFractional;
}

float Fixed::toFloat( void ) const
{
    return ((float)FixedPointNumber / 256);
}

int Fixed::toInt( void ) const
{
    return (FixedPointNumber >> NbrOfFractional);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return (os);
}

Fixed& Fixed::operator+(const Fixed& other)
{
    this->FixedPointNumber + other.FixedPointNumber;
    return *this;
}
Fixed& Fixed::operator-(const Fixed& other)
{
    this->FixedPointNumber - other.FixedPointNumber;
    return *this;
}
Fixed& Fixed::operator*(const Fixed& other)
{
    this->FixedPointNumber * other.FixedPointNumber;
    return *this;
}
Fixed& Fixed::operator/(const Fixed& other)
{
    this->FixedPointNumber / other.FixedPointNumber;
    return *this;
}
bool Fixed::operator>(const Fixed& other)
{
    if (this->FixedPointNumber > other.FixedPointNumber)
        return true;
    return false;
}
bool Fixed::operator<(const Fixed& other)
{
    if (this->FixedPointNumber < other.FixedPointNumber)
        return true;
    return false;
}
bool Fixed::operator>=(const Fixed& other)
{
    if (this->FixedPointNumber >= other.FixedPointNumber)
        return true;
    return false;
}
bool Fixed::operator<=(const Fixed& other)
{
    if (this->FixedPointNumber <= other.FixedPointNumber)
        return true;
    return false;
}
bool Fixed::operator==(const Fixed& other)
{
    if (this->FixedPointNumber == other.FixedPointNumber)
        return true;
    return false;
}
bool Fixed::operator!=(const Fixed& other)
{
    if (this->FixedPointNumber != other.FixedPointNumber)
        return true;
    return false;
}
Fixed& Fixed::operator++(int)
{
    Fixed remainder = *this;
    this->FixedPointNumber++;
    return (remainder);
}
Fixed& Fixed::operator--(int)
{
    Fixed remainder = *this;
    this->FixedPointNumber--;
    return (remainder);
}
Fixed& Fixed::operator++(void)
{
    this->FixedPointNumber++;
    return (*this);
}
Fixed& Fixed::operator--(void)
{
    this->FixedPointNumber--;
    return (*this);
}

Fixed &Fixed::min(Fixed &Fixed1, Fixed &Fixed2)
{
    if (Fixed1.FixedPointNumber < Fixed2.FixedPointNumber)
        return (Fixed1);
    return Fixed2;
}
const Fixed &Fixed::min(const Fixed &Fixed1, const Fixed &Fixed2)
{
    if (Fixed1.FixedPointNumber < Fixed2.FixedPointNumber)
        return Fixed1;
    return Fixed2;
}
const Fixed &Fixed::max(const Fixed &Fixed1, const Fixed &Fixed2)
{
    if (Fixed1.FixedPointNumber > Fixed2.FixedPointNumber)
        return Fixed1;
    return Fixed2;
}
Fixed &Fixed::max(Fixed &Fixed1, Fixed &Fixed2)
{
    if (Fixed1.FixedPointNumber > Fixed2.FixedPointNumber)
        return Fixed1;
    return Fixed2;
}

int Fixed::getRawBits( void ) const 
{ 
    return FixedPointNumber; 
}

void Fixed::setRawBits( int const raw ) 
{ 
    FixedPointNumber = raw; 
}

// Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

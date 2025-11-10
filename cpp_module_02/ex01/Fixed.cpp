/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:21:58 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/10 13:57:08 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int  Fixed::NbrOfFractional = 8;

Fixed::Fixed() { 
    FixedPointNumber = 0;
    std::cout << "Default constructor called" << std::endl; 
}

Fixed::Fixed(const Fixed& obj)
{
    FixedPointNumber = obj.FixedPointNumber;
    std::cout << "copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    this->FixedPointNumber = other.FixedPointNumber;
    std::cout << "Copy assignment operator called\n";
    return *this;
}

Fixed::Fixed(const float Num)
{
    std::cout << "Float constructor called\n";
    FixedPointNumber = roundf(Num * 256);
}

Fixed::Fixed(const int Num)
{
    std::cout << "Int constructor called\n";
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

int Fixed::getRawBits( void ) const 
{ 
    return FixedPointNumber; 
}

void Fixed::setRawBits( int const raw ) 
{ 
    FixedPointNumber = raw; 
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

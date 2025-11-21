/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:21:58 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/21 15:07:13 by hmouis           ###   ########.fr       */
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
    if (this != &other)
    {
        this->FixedPointNumber = other.FixedPointNumber;
        std::cout << "Copy assignment operator called\n";
    }
    return *this;
}

int Fixed::getRawBits( void ) const 
{ 
    std::cout << "getRawBits member function called\n";
    return FixedPointNumber; 
}

void Fixed::setRawBits( int const raw ) 
{ 
    FixedPointNumber = raw; 
    std::cout << "setRawBits member function called\n";
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

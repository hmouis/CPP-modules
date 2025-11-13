/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:01:12 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/13 22:12:48 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
#define Fixed_hpp

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed{
    private:
        int FixedPointNumber;
        static const int NbrOfFractional;
    public:
        Fixed();
        Fixed(const int Num);
        Fixed(const float Num);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        Fixed& operator+(const Fixed& other);
        Fixed& operator-(const Fixed& other);
        Fixed& operator*(const Fixed& other);
        Fixed& operator/(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
        Fixed& operator++(int);
        Fixed& operator--(void);
        Fixed& operator++(void);
        Fixed& operator--(int);
        // ~Fixed();
        
        Fixed &min(Fixed &Fixed1, Fixed &Fixed2);
        const Fixed &min(const Fixed &Fixed1, const Fixed &Fixed2);
        const Fixed &max(const Fixed &Fixed1, const Fixed &Fixed2);
        Fixed &max(Fixed &Fixed1, Fixed &Fixed2);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
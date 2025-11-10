/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:01:12 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/10 13:24:02 by hmouis           ###   ########.fr       */
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
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);

#endif
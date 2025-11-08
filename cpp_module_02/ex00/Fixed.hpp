/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:01:12 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/08 16:49:56 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
#define Fixed_hpp

#include <iostream>

class Fixed{
    private:
        int FixedPointNumber;
        static const int NbrOfFractional;
    public:
        Fixed();
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
    
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};





#endif
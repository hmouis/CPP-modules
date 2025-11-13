/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:51:09 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/13 22:06:31 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;

    std::cout << ++a << std::endl;
    
    std::cout << a << std::endl;

    std::cout << a++ << std::endl;

    std::cout << a << std::endl;

    std::cout << b << std::endl;
    
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}
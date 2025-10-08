/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 12:05:32 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/03 12:19:34 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;
    

    
    std::cout << "The memory address of the string variable: " << &str << "\n";
    std::cout << "The memory address held by stringPTR: " << ptr << "\n";
    std::cout << "The memory address held by stringREF: " << &ref << "\n\n";

    
    std::cout << "The value of the string variable: " << str << "\n";
    std::cout << "The value pointed to by stringPTR: " << *ptr << "\n";
    std::cout << "The value pointed to by stringREF: " << ref << "\n";
}
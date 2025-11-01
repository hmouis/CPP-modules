/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:13:49 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/18 14:38:57 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook phone;
    std::string input;
    
    for (int i = 0; i < 8; i++)
    {
        std::cout << "Enter a command: [ADD], [SEARCH] or [EXIT]\n";
        getline(std::cin, input);
        if (input == "ADD")
            Add(phone.contact[i]);
        else if (input == "SEARCH"){
            Search(phone);
            i--;
        }
        else if (input == "EXIT")
            return (0);
        else
            i--;
        if (i == 7)
            i = -1;
    }
    return (0);
}

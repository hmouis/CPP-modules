/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:13:49 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 14:16:27 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook phone;
    std::string input;
    int index;
    
    for (int i = 0; i < 8; i++)
    {
        std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
        getline(std::cin, input);
        if (input == "ADD")
            parse_add(phone.contact[i]);
        else if (input == "SEARCH")
        {
            index = parse_search(phone.contact[i]);
            display_contact(index, phone.contact[index - 1]);
            i--;
        }
        else if (input == "EXIT")
            return (0);
        else
            i--;
        if (i == 2)
            i = -1;
    }
    return (0);
}

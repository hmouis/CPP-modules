/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:45:44 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 14:13:02 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int PhoneNumber(std::string phone)
{
    for (int i = 0; phone[i]; i++)
    {
        if (!isdigit(phone[i]))
            return (0);
    }
    return (1);
}
int ft_atoi(std::string str)
{
    int result = -1;

    if (str == "0")
        return (-1);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '9' || !isdigit(str[i]) || i > 0)
            return (-1);
        result = str[i] - '0';
    }
    return (result);
}

int parse_search(Contact info)
{
    int index;
    std::string i;
    
    do{
        std::cout << "Please enter an index between 1 and 8: ";
        getline (std::cin, i);
        index = ft_atoi(i);
        if (index == -1)
            std::cout << "Please enter a valide index\n";
    }while (index == -1 || i.empty());
    return (index);
}

void print_str(std::string str)
{
    int i;
    
    for (i = 0; str[i]; i++)
    {
        if (i == 9)
        {
            std::cout << ".";
            return ;
        }
        std::cout << str[i];
    }
    while (++i < 10)
        std::cout << ' ';
}

void parse_add(Contact &contact)
{
    contact.setFirstName(contact);
    contact.setLastName(contact);
    contact.setNickname(contact);
    contact.setPhoneNumber(contact);
    contact.setSecret(contact);
}

void display_contact(int index, Contact contact)
{
    if (contact.getFirstName(contact) == "")
    {
        std::cout << "There is no info for this contact\n";
        return ;
    }
    std::cout << "---------------------------------------------\n";
    std::cout << "| Index | First Name| Last Name |  NickName |\n";
    std::cout << "---------------------------------------------\n";
    std::cout << "|   " << index << "   | ";
    print_str(contact.getFirstName(contact));
    std::cout << " | ";
    print_str(contact.getLastName(contact));
    std::cout << " | ";
    print_str(contact.getNickname(contact));
    std::cout << " |";
    std::cout << "\n---------------------------------------------\n";
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:45:44 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/18 14:53:35 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    for (int i = 0; i < 8; i++)
        contact[i].Init();
}

void Add(Contact &contact)
{
    contact.setFirstName();
    contact.setLastName();
    contact.setNickname();
    contact.setPhoneNumber();
    contact.setSecret();
    contact.setInfo(true);
}

void DisplayContacts(PhoneBook PhoneBook)
{
    for (int i = 0; i < 8; i++)
    {
        if (PhoneBook.contact[i].getInfo() == false)
            break;
        if (i == 0){
            std::cout << std::right << "|" << std::setw(10) << "Index";
            std::cout << "|" << std::setw(10) << "FirstName";
            std::cout << "|" <<  std::setw(10) << "LastName" << "|" << std::setw(10) << "NickName" << "|\n";
        }
        std::cout << "|" << std::setw(10);
        std::cout << i;
        std::cout << "|";
        if (PhoneBook.contact[i].getFirstName().length() <= 10)
            std::cout << std::setw(10);
        if (PhoneBook.contact[i].getFirstName().length() > 10)
            std::cout << PhoneBook.contact[i].getFirstName().substr(0, 9) << ".";
        else
            std::cout << PhoneBook.contact[i].getFirstName();
        std::cout << "|";
        if (PhoneBook.contact[i].getLastName().length() <= 10)
            std::cout << std::setw(10);
        if (PhoneBook.contact[i].getLastName().length() > 10)
            std::cout << PhoneBook.contact[i].getLastName().substr(0, 9) << ".";
        else
            std::cout << PhoneBook.contact[i].getLastName();
        std::cout << "|";
        if (PhoneBook.contact[i].getNickname().length() <= 10)
            std::cout << std::setw(10);
        if (PhoneBook.contact[i].getNickname().length() > 10)
            std::cout << PhoneBook.contact[i].getNickname().substr(0, 9) << ".|\n";
        else
            std::cout << PhoneBook.contact[i].getNickname() << "|\n"; 
    }
}

void DisplaySpecificContact(PhoneBook PhoneBook, int i)
{
    if (PhoneBook.contact[i].getInfo() == false){
        std::cout << "There is no info for this contact\n";
        return ;
    }
    std::cout << std::left << std::setw(15) << "First Name" << ": " << PhoneBook.contact[i].getFirstName() << "\n";
    std::cout << std::setw(15) << "Last Name" << ": " << PhoneBook.contact[i].getLastName() << "\n";
    std::cout << std::setw(15) << "NickName" << ": " << PhoneBook.contact[i].getNickname() << "\n";
    std::cout << std::setw(15) << "Phone Number" << ": " << PhoneBook.contact[i].getPhoneNumber() << "\n";
    std::cout << std::setw(15) << "Darkest Secret" << ": " << PhoneBook.contact[i].getSecret() << "\n";
}

void Search(PhoneBook PhoneBook)
{
    std::string n;
    int i = 0;
    int index = 0;
    DisplayContacts(PhoneBook);   
    while (1)
    {
        std::cout << "Entre a number between 0 and 7\n";
        std::getline(std::cin, n);
        if (n.empty())
            continue;
        i = 0;
        while (n[i] && isdigit(n[i]))
        {
            index = index * 10 + (n[i] - '0');
            if (index > 7)
            {
                std::cout << "Number is out of range\n";
                return ;
            }
            i++;
        }
        if (n[i])
        {
            std::cout << "Only digits\n";
                return ;
        }
        break;
    }
    DisplaySpecificContact(PhoneBook, index);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:45:44 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/13 00:32:38 by hmouis           ###   ########.fr       */
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

void PrintStr(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".\n";
    else  
        std::cout << str << "\n";
}

void DisplaySpecificContact(PhoneBook PhoneBook, int i)
{
    if (PhoneBook.contact[i].getInfo() == false){
        std::cout << "There is no info for this contact\n";
        return ;
    }
    std::cout << std::left << std::setw(15) << "First Name" << ": ";
    PrintStr(PhoneBook.contact[i].getFirstName());
    std::cout << std::setw(15) << "Last Name" << ": ";
    PrintStr(PhoneBook.contact[i].getLastName());
    std::cout << std::setw(15) << "NickName" << ": ";
    PrintStr(PhoneBook.contact[i].getNickname());
    std::cout << std::setw(15) << "Phone Number" << ": ";
    PrintStr(PhoneBook.contact[i].getPhoneNumber());
    std::cout << std::setw(15) << "Darkest Secret" << ": ";
    PrintStr(PhoneBook.contact[i].getSecret());
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

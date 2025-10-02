/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:45:29 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 14:02:53 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    darkest_secret = "";
    phone_number = "";
    nickname = "";
}

void    Contact::setFirstName(Contact &contact)
{
    std::string str;
    
    do{
        std::cout << "First Name: ";
        getline (std::cin, str);
        if (str.empty())
            std::cout << "Please enter the first name\n";
    }while (str.empty());
    contact.first_name = str;
}
void    Contact::setLastName(Contact &contact)
{
    std::string str;
    
    do{
        std::cout << "Last Name: ";
        getline (std::cin, str);
        if (str.empty())
            std::cout << "Please enter the Last name\n";
    }while (str.empty());
    contact.last_name = str;
}
void    Contact::setNickname(Contact &contact)
{
    std::string str;
    
    do{
        std::cout << "NickName: ";
        getline (std::cin, str);
        if (str.empty())
            std::cout << "Please enter the NakeName\n";
    }while (str.empty());
    contact.nickname = str;
}
void    Contact::setSecret(Contact &contact)
{
    std::string str;
    
    do{
        std::cout << "Darkest Secret: ";
        getline (std::cin, str);
        if (str.empty())
            std::cout << "Please enter the Darkest Secret\n";
    }while (str.empty());
    contact.darkest_secret = str;
}

void    Contact::setPhoneNumber(Contact &contact)
{
    std::string str;
    
    do{
        std::cout << "Phone Number: ";
        getline (std::cin, str);
        if (str.empty())
            std::cout << "Please enter the phone Number\n";
        else if (!PhoneNumber(str))
        {
            std::cout << "Please enter only digits\n";
            str = "";
        }
    }while (str.empty());
    contact.phone_number = str;
}

std::string Contact::getFirstName(Contact contact)
{
    return (contact.first_name);
}
std::string Contact::getLastName(Contact contact)
{
    return (contact.last_name);
}
std::string Contact::getNickname(Contact contact)
{
    return (contact.nickname);
}
std::string Contact::getSecret(Contact contact)
{
    return (contact.darkest_secret);
}
std::string Contact::getPhoneNumber(Contact contact)
{
    return (contact.phone_number);
}
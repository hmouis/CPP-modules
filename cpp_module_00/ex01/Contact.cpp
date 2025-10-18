/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:45:29 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/18 14:41:51 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void    Contact::setFirstName()
{
    int i = 0;
    std::string str;
    
    while (1)
    {
        std::cout << "First Name: ";
        getline (std::cin, str);
        if (str.empty()){
            std::cout << "Please enter the first name\n";
            continue;
        }
        for (i = 0; isprint(str[i]); i++) ;
        if (str[i]){
            std::cout << "This string is not printible\n";
            continue;
        }
        else
            break;
    }
    first_name = str;
    
}
void    Contact::setLastName()
{
    std::string str;
    int i = 0;
    
    while (1)
    {
        std::cout << "Last Name: ";
        getline (std::cin, str);
        if (str.empty()){
            std::cout << "Please enter the Last name\n";
            continue;
        }
        for (i = 0; isprint(str[i]); i++) ;
        if (str[i]){
            std::cout << "This string is not printible\n";
            continue;
        }  
        else
            break;
    }
    last_name = str;
}
void    Contact::setNickname()
{
    int i = 0;
    std::string str;
    
    while(1)
    {
        std::cout << "NickName: ";
        getline (std::cin, str);
        if (str.empty()){
            std::cout << "Please enter the NakeName\n";
            continue;
        }
        for (i = 0; isprint(str[i]); i++) ;
        if (str[i]){
            std::cout << "This string is not printible\n";
            continue;
        }
        else
            break;
    }
    nickname = str;
}
void    Contact::setSecret()
{
    std::string str;
    int i = 0;
    
    while (1)
    {
        std::cout << "Darkest Secret: ";
        getline (std::cin, str);
        if (str.empty()){
            std::cout << "Please enter the Darkest Secret\n";
            continue;
        }
        for (i = 0; isprint(str[i]); i++) ;
        if (str[i]){
            std::cout << "This string is not printible\n";
            continue;
        }
        else
            break;
    }
    darkest_secret = str;
}


void    Contact::setPhoneNumber()
{
    std::string str;
    int i = 0;
    
    do{
        std::cout << "Phone Number: ";
        getline (std::cin, str);
        if (str.empty())
            std::cout << "Please enter the phone Number\n";
        else
        {
            for (i = 0; isdigit(str[i]); i++) ;
            if (!str[i])
                break;
            std::cout << "Please enter only digits\n";
            str = "";
        }
    }while (str.empty());
    phone_number = str;
}

void Contact::setInfo(bool info)
{
    this->info = info;
}

bool Contact::getInfo()
{
    return (info);
}

std::string Contact::getFirstName()
{
    return (first_name);
}
std::string Contact::getLastName()
{
    return (last_name);
}
std::string Contact::getNickname()
{
    return (nickname);
}
std::string Contact::getSecret()
{
    return (darkest_secret);
}
std::string Contact::getPhoneNumber()
{
    return (phone_number);
}

void Contact::Init()
{
    first_name = "";
    last_name = "";
    nickname = "";
    darkest_secret = "";
    phone_number = "";
    info = false;
}

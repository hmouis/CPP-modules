/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:13:49 by hmouis            #+#    #+#             */
/*   Updated: 2025/09/29 15:56:52 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone_book.hpp"

int phone_number(std::string phone)
{
    for (int i = 0; phone[i]; i++)
    {
        if (!isdigit(phone[i]))
            return (0);
    }
    return (1);
}

void parse_add(Contact &field)
{
    do{
        std::cout << "first name: ";
        getline (std::cin, field.first_name);
        if (field.first_name.empty())
            std::cout << "Please enter the first name\n";
    }while (field.first_name.empty());
    
    do{
        std::cout << "last name: ";
        getline (std::cin, field.last_name);
        if (field.last_name.empty())
            std::cout << "Please enter the last name\n";
    }while (field.last_name.empty());
    
    do{
        std::cout << "Nickname: ";
        getline (std::cin, field.nickname);
        if (field.nickname.empty())
            std::cout << "Please enter the nickname\n";
    }while (field.nickname.empty());
    
    do{
        std::cout << "Phone number: ";
        getline (std::cin, field.phone_number);
        if (field.phone_number.empty())
            std::cout << "Please enter the phone number\n";
        else if (!phone_number(field.phone_number))
        {
            std::cout << "Please enter only digits\n";
            field.phone_number = "";
        }
    }while (field.phone_number.empty());
    
    do{
        std::cout << "Darkest secret: ";
        getline (std::cin, field.darkest_secret);
        if (field.darkest_secret.empty())
            std::cout << "Please enter the darkest secret\n";
    }while (field.darkest_secret.empty());
}

int ft_atoi(std::string str)
{
    int result = -1;

    for (int i = 0; str[i]; i++)
    {
        if (!isdigit(str[i]) || i > 0)
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

void display_contact(int index, std::string first, std::string last, std::string nickname)
{
    // std::cout << "---------------------------------------------\n";
    // std::cout << "| index | first name | last name  |  nickname  |\n";
    std::cout << "-----------------------------------------------\n";
    std::cout << "|   " << index << "   | ";
    print_str(first);
    std::cout << " | ";
    print_str(last);
    std::cout << " | ";
    print_str(nickname);
    std::cout << " |";
    std::cout << "\n-----------------------------------------------\n";
}

int main()
{
    PhoneBook phone;
    std::string input;
    Contact field;
    int index;
    
    for (int i = 0; i < 8; i++)
    {
        std::cout << "Enter a command: ADD, SEARCH or EXIT" << std::endl;
        getline(std::cin, input);
        if (input == "ADD")
            parse_add(phone.contact[i]);
        else if (input == "SEARCH")
        {
            do
            {
                index = parse_search(phone.contact[i]);
                std::cout << "There is no info\n";
            } while (index > i);
            display_contact(i + 1, phone.contact[index - 1].first_name, phone.contact[index -1].last_name, phone.contact[index - 1].nickname);
            i--;
        }
        else if (input == "EXIT")
            return (0);
        else
            i--;
    }
    return (0);
}

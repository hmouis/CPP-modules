/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:24:28 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 14:11:03 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_h
#define PhoneBook_h
#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
    public:
       Contact contact[8];
};

int PhoneNumber(std::string phone);
void print_str(std::string str);
int parse_search(Contact info);
int ft_atoi(std::string str);
void display_contact(int index, Contact contact);
void parse_add(Contact &contact);

#endif
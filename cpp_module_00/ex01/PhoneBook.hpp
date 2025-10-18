/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:24:28 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/18 14:17:40 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_h
#define PhoneBook_h

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    public:
        PhoneBook();
        Contact contact[8];
};

void Search(PhoneBook PhoneBook);
void Add(Contact &contact);

#endif
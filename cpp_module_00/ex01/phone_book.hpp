/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phone_book.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/02 18:24:28 by hmouis            #+#    #+#             */
/*   Updated: 2025/09/11 12:41:08 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef phone_book_h
#define phone_book_h
#include <iostream>
#include <string>

class Contact{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;
};

class PhoneBook{
    public:
       Contact contact[8];
};


#endif
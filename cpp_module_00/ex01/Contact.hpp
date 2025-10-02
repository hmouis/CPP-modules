/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:06:23 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 13:59:23 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Contact_h
#define Contact_h

#include <iostream>
#include <string>


class Contact{

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;

public:
    Contact ();
    
    void setFirstName(Contact &contact);
    void setLastName(Contact &contact);
    void setNickname(Contact &contact);
    void setSecret(Contact &contact);
    void setPhoneNumber(Contact &contact);
    
    std::string getFirstName(Contact contact);
    std::string getLastName(Contact contact);
    std::string getNickname(Contact contact);
    std::string getSecret(Contact contact);
    std::string getPhoneNumber(Contact contact);
};

#endif
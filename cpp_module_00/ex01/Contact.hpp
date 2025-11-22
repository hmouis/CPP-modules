/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 12:06:23 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/22 14:10:24 by hmouis           ###   ########.fr       */
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
    bool info;

public:    
    void setFirstName();
    void setLastName();
    void setNickname();
    void setSecret();
    void setPhoneNumber();
    void setInfo(bool info);
    void Init();
    
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getSecret();
    std::string getPhoneNumber();
    bool getInfo();
};

#endif
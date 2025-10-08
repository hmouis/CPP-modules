/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:34:37 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 14:25:18 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Weapon_hpp
#define Weapon_hpp

#include <iostream>


class Weapon{
    private:
        std::string type;
    
    public:
        Weapon(std::string type);
        
        const std::string& getType(); 
        void setType(std::string type);
};


#endif
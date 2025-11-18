/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:36:20 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/18 12:34:38 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_hpp
#define HumanB_hpp

#include <iostream>
#include "Weapon.hpp"


class HumanB{
    private:
        std::string name;
        Weapon *WeaponB;
    public:
        HumanB(std::string name);

        void setWeapon(Weapon &WeaponB);
        void attack();
};



#endif
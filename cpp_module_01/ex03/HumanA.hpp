/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 12:59:24 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/18 12:13:53 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_hpp
#define HumanA_hpp

#include <iostream>
#include "Weapon.hpp"


class HumanA{
    private:
        std::string name;
        Weapon &WeaponA;
    public:
        HumanA(std::string name, Weapon &WeaponA);

        void attack();
};



#endif
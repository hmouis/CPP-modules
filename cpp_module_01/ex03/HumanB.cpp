/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:54:19 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 14:31:51 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
    name(name) {};

void HumanB::attack()
{
    std::cout << name << " attacks with their " << WeaponB->getType() << "\n";
}

void HumanB::setWeapon(Weapon &WeaponB)
{
    this->WeaponB = &WeaponB;
}
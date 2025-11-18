/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 13:36:58 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/18 12:32:53 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponA) :
    name(name), WeaponA(WeaponA) {};

void HumanA::attack()
{
    std::cout << name << " attacks with their " << WeaponA.getType() << "\n";
}
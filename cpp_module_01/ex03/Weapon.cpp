/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 14:53:03 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 14:25:07 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string type):
    type(type) {};

void Weapon::setType(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    return (type);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:39:20 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/25 21:35:20 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() 
{};

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName()
{
    return (name);
}

Zombie::~Zombie()
{
    std::cout << "the zombie: " << getName() << " has been destroyed.\n";
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:39:20 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 15:02:21 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce( void )
{
    if (name == "Foo")
        std::cout << "Foo: ";
    else
        std::cout << "<" << name << ">: ";
    std::cout << "BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
    std::cout << "the zombie: " << getName() << " has been destroyed.\n";
}

std::string Zombie::getName()
{
    return (name);
}

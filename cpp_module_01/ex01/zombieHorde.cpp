/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 14:33:30 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 15:18:42 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie_arr = new Zombie[N];
    
    for (int i = 0; i < N; i++)
        zombie_arr[i].setName(name);
    return (zombie_arr);
}

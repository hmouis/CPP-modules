/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:51:30 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 11:41:30 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
    Zombie *zom;

    for (int i= 1; av[i]; i++)
    {
        if (av[i] && !(i % 2))
            randomChump(av[i]);
        if (av[i] && i % 2)
        {
            zom = newZombie(av[i]);
            zom->announce();
            delete zom;
        }
    }
    
}
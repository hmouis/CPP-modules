/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:09:00 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/08 12:11:56 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int ac, char **av)
{
    Sed sed;
    std::string line;
    if (parse(ac, av, sed))
        return (1);
    
    if (FillNewFile(sed, av))
        return (1);
    
    sed.inFile.close();
    sed.outFile.close();
    return (0);
}
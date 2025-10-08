/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:11:14 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/08 11:12:41 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Sed_hpp
#define Sed_hpp

#include <iostream>
#include <fstream>


class Sed
{
    public:
        std::string S1;
        std::string S2;
        std::ifstream inFile;
        std::fstream outFile;
};


int parse(int ac, char **av, Sed &sed);
int FillNewFile(Sed &sed, char **av);

#endif
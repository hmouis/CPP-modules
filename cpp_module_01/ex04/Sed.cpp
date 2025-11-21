/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 11:23:47 by hmouis            #+#    #+#             */
/*   Updated: 2025/11/21 14:45:53 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int parse(int ac, char **av, Sed &sed)
{
    if (ac != 4)
    {
        std::cout << "Invalude number of argument.\n" ;
        return (1);
    }
    sed.inFile.open(av[1]);
    if (!sed.inFile.is_open())
    {
        std::cout << "Failed to open the in file " << av[1] << "\n" ;
        return (1);
    }
    if (!av[2][0] && !av[3][0])
    {
        std::cout << "String is empty\n";
        return (1);   
    }
    std::string file = av[1];
    file += ".replace";
    sed.outFile.open(file.c_str(), std::ios::out | std::ios::trunc);
    if (!sed.outFile.is_open())
    {
        std::cout << "Failed to open the out file\n";
        return (1);
    }
    sed.S1 = av[2];
    sed.S2 = av[3];
    return (0);
}

int fill_out_file(Sed &sed, std::string line)
{
    for (int i = 0; line[i]; i++)
    {
        if (line.compare(i, sed.S1.length(), sed.S1) == 0)
        {
            i += sed.S1.length() - 1;
            sed.outFile << sed.S2;
        }
        else
            sed.outFile << line[i];
        if (sed.outFile.fail())
             return (std::cout << "Failed to write to this file\n", 1);
    }
    return (0);
}

int FillNewFile(Sed &sed, char **av)
{

    std::string line;
    std::string tmp;

    std::ifstream TmpFile(av[1]);
    if (!sed.inFile.is_open())
    {
        std::cout << "Failed to open the file " << av[1] << "\n" ;
        return (1);
    }
    std::getline(TmpFile, tmp);
    while (std::getline(sed.inFile, line))
    {
        if (fill_out_file(sed, line))
            return (1);
        if (std::getline(TmpFile, tmp))
            sed.outFile << "\n";
    }
    sed.inFile.clear();
    sed.inFile.seekg(-1, std::ios::end);
    char last_char;
    sed.inFile.get(last_char);
    if (last_char == '\n')
        sed.outFile << "\n";
    TmpFile.close();
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:30:22 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/05 15:15:00 by hmouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef zombie_hpp
# define zombie_hpp

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();

        std::string getName();
        void setName(std::string name);
        void announce( void );
};
   
Zombie* zombieHorde( int N, std::string name );        

#endif
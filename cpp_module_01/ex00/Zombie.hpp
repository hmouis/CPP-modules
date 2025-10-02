/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmouis <hmouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 11:30:22 by hmouis            #+#    #+#             */
/*   Updated: 2025/10/02 11:35:19 by hmouis           ###   ########.fr       */
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
        ~Zombie();
        
        std::string getName();
        void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
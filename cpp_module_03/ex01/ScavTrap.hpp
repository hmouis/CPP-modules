#ifndef ScavTrap_hpp
#define ScavTrap_hpp

#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();

        void guardGate();
        void attack(const std::string& target);
};








#endif
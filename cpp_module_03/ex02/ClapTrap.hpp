#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
        
        void setHitPoints(const unsigned int& HitPoints);
        void setEnergyPoints(const unsigned int& EnergyPoints);
        void setAttackDamage(const unsigned int& AttackDamage);
        
        std::string getName();
        unsigned int getHitPoints();
        unsigned int getEnergyPoints();
        unsigned int getAttackDamage();
        

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif
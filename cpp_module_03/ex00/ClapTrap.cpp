#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){ std::cout << "Default constructor called\n";}

ClapTrap::ClapTrap(std::string Name){
    this->Name = Name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Parameterized constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "Copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "Copy assignment operator called\n";
    return *this;
}

ClapTrap::~ClapTrap(){ std::cout << "Destructor called\n"; }
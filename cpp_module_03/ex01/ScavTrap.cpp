#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){ std::cout << "ScavTrap default constructor called\n"; }

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
    this->Name = Name;
    HitPoints = 100;
    EnergyPoints = 50;
    AttackDamage = 20;
    std::cout << "ScapTrap Parametrized constructor called\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "ScavTrap Copy constructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "ScavTrap Copy assignment operator called\n";
    return *this;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructer called\n"; }

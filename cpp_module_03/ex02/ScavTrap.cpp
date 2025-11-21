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
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
        std::cout << "ScavTrap Copy assignment operator called\n";
    }
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (getHitPoints() == 0)
        std::cout << "It's dead\n";
    else if (getEnergyPoints() > 0)
    {
        setEnergyPoints(getEnergyPoints() - 1);
        std::cout << "ClapTrap " << this->Name << " attacks " << target <<", causing " <<
            getAttackDamage() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << getName() << " Can't attack " << target << " No EnergyPoints left\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode.\n";
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap destructer called\n"; }

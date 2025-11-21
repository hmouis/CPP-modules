#include "FragTrap.hpp"

FragTrap::FragTrap(){ std::cout << "FragTrap default constructor called\n"; }

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    this->Name = Name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
    std::cout << "FragTrap Parametrized constructor called\n";
}

FragTrap::FragTrap(const FragTrap& other)
{
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->EnergyPoints = other.EnergyPoints;
    this->AttackDamage = other.AttackDamage;
    std::cout << "FragTrap Copy constructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
    {
        this->Name = other.Name;
        this->HitPoints = other.HitPoints;
        this->EnergyPoints = other.EnergyPoints;
        this->AttackDamage = other.AttackDamage;
        std::cout << "FragTrap Copy assignment operator called\n";
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap request: high-fives\n";
}

FragTrap::~FragTrap() { std::cout << "FragTrap destructer called\n"; }

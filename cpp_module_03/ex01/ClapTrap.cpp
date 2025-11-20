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

void ClapTrap::setHitPoints(const unsigned int& HitPoints) {this->HitPoints = HitPoints; };
void ClapTrap::setEnergyPoints(const unsigned int& EnergyPoints) {this->EnergyPoints = EnergyPoints; };
void ClapTrap::setAttackDamage(const unsigned int& AttackDamage) {this->AttackDamage = AttackDamage; };
        
unsigned int ClapTrap::getHitPoints() { return HitPoints; };
unsigned int ClapTrap::getEnergyPoints(){ return EnergyPoints; };
unsigned int ClapTrap::getAttackDamage(){ return AttackDamage; };
std::string ClapTrap::getName(){ return Name; };

void ClapTrap::attack(const std::string& target)
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
        std::cout << "ClapTrap " << getName() << " Can't attack " << target << " No EnergyPoints left\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (getHitPoints() > 0)
    {
        if (amount > getHitPoints())
            setHitPoints(0);
        else
            setHitPoints(getHitPoints() - amount);
        std::cout << "ClapTrap " << getName() << " Take " << amount << " points of damage!\n";
    }
    else 
        std::cout << "ClapTrap " << getName() << " Can't take damage because it's dead\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (getHitPoints() == 0)
        std::cout << "ClapTrap " << getName() << " Can't repair because it have 0 HitPoints\n";
    else if (getEnergyPoints() == 0)
        std::cout << "ClapTrap " << getName() << " Can't repair because it have 0 EnergyPoints\n";
    else
    {
        setEnergyPoints(getEnergyPoints() - 1);
        setHitPoints(getHitPoints() + amount);
        std::cout << "ClapTrap " << getName() << " regain " << amount << " of HitPoints\n";
    }
}

ClapTrap::~ClapTrap(){ std::cout << "Destructor called\n"; }
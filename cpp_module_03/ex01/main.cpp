#include "ScavTrap.hpp"


int main() {
    ScavTrap trap1("Alpha");
    ScavTrap trap2("Beta");
	ClapTrap	trapA("bob");
	ClapTrap	trapB("foo");


	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());
	trapA.takeDamage(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

    trapA.setAttackDamage(2);
    trapB.setAttackDamage(1);

	trapA.attack(trapB.getName());
	trapB.takeDamage(2);
	trapB.attack(trapA.getName());
	trapA.takeDamage(5);
	trapB.attack(trapA.getName());
	trapA.takeDamage(2);

    trapA.beRepaired(3);
    trapB.beRepaired(10);
    std::cout << "--- Testing attack ---\n";
    trap1.attack("Beta");    

    std::cout << "--- Testing takeDamage ---\n";
    trap2.takeDamage(5);    

    std::cout << "--- Testing beRepaired ---\n";
    trap2.beRepaired(3);  

    std::cout << "--- Testing attack damage setter/getter ---\n";
    trap1.setAttackDamage(4);
    trap1.attack("Beta");   

    std::cout << "--- Testing takeDamage more than HP ---\n";
    trap1.takeDamage(100); 

    std::cout << "--- Testing repair after death ---\n";
    trap1.beRepaired(10);  
    return 0;
}

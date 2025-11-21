#include "FragTrap.hpp"


int main() {
	ClapTrap	trapA("A");
	ClapTrap	trapB("B");
    FragTrap frag1("C");
    FragTrap frag2("D");

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


    std::cout << "--- FragTrap attacking ---\n";
    frag1.attack(frag2.getName());

    std::cout << "--- FragTrap taking damage ---\n";
    frag2.takeDamage(15);

    std::cout << "--- FragTrap repairing ---\n";
    frag2.beRepaired(10);

    std::cout << "--- FragTrap requests high five ---\n";
    frag1.highFivesGuys();
    return 0;
}

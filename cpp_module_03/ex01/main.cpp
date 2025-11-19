#include "ClapTrap.hpp"


int	main(void)
{
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
	return (0);
}
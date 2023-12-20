#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap test("Ambiguous");
	test.attack("its identity problems");
	test.takeDamage(15);
	test.beRepaired(18);
	test.whoAmI();
	test.guardGate();
	test.highFivesGuys();
	test.attack("its indentity problems");
	test.takeDamage(15);
}

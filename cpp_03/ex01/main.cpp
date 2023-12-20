#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap test("Bob");
	test.attack("the evaluator");
	test.takeDamage(15);
	test.guardGate();
	test.beRepaired(18);
	test.attack("the evaluator");
	test.attack("the evaluator");
	test.guardGate();
	test.attack("the evaluator");
	test.attack("the evaluator");
	test.attack("the evaluator");
}

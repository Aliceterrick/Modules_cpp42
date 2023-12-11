#include "Harl.hpp"

int	main(void)
{
	std::string input;
	Harl harl;
	std::cout << "How do you want to see me complain today ? > ";
	while (std::cin >> input)
	{
		if (!input.compare("EXIT") || std::cin.eof())
			break ;
		harl.complain(input);
		std::cout << "And now ? (enter EXIT for quit) > ";
	}
	return 0;
}
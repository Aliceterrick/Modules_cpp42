#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl harl;

	if (ac != 2)
		return (harl.complainingAboutComplainDemand(), 1);
	harl.harlFilter(av[1]);
	return 0;
}
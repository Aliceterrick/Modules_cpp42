#include "Zombie.hpp"
#include <stdio.h>

std::string	*split(std::string toSplit)
{
	int	tem = 0;
	int	sep[2] = {0, 0};
	size_t	index = -1;

	for(int i = 0; (index = toSplit.find(" ", index + 1)) != std::string::npos; i++)
	{
		tem++;
		if (tem > 2)
			return NULL;
		sep[i] = index;
	}
	std::string *split = new std::string[3];
	split[0] = toSplit.substr(0, sep[0]);
	split[1] = toSplit.substr(sep[0] + 1, sep[1] - sep[0] - 1);
	split[2] = toSplit.substr(sep[1] + 1);
	return split;
}

std::string	*getInput(int &InpStatus)
{
	std::string input = "";
	std::string *Names;

	std::cout << "Please specify 3 names of Zombies, separates with spaces" << std::endl;
	while (42)
	{
		getline(std::cin, input);
		if (std::cin.eof())
			return NULL;
		if ((Names = split(input)))
			break ;
		std::cin.clear();
		std::cout << "Please specify 3 names of Zombies, separates with spaces" << std::endl;
	}
	InpStatus = 1;
	return Names;
}

Zombie	*getZombieAdress(std::string name)
{
	Zombie	*second = newZombie(name);
	return second;
}

int	main(void)
{
	int	InpStatus = 0;

	std::string	*av = getInput(InpStatus);
	if (InpStatus == 0)
		return 1;
	std::cout << ">>(main) Creation of a first located Zombie" << std::endl;
	Zombie first(av[0]);
	std::cout << ">>(main) Annoucement of the first Zombie" << std::endl;
	first.announce();
	std::cout << ">>(main) Call of getZombieAddress" << std::endl;
	Zombie	*second = getZombieAdress(av[1]);
	std::cout << ">>(main) Call of randomChump" << std::endl;
	randomChump(av[2]);
	std::cout << ">>(main) Unfortunatly, " << av[2] << " has been lost definitly" << std::endl;
	std::cout << ">>(main) But we steal have " << av[1] << "'s address. We're going to ask him some questions about " << av[2] << "'s disparition" << std::endl;
	second->announce();
	std::cout << ">>(main) It's a Zombie, he knows nothing" << std::endl;
	delete[] av;
	delete second;
	return 0;
}

#include "Zombie.hpp"

int	main(void)
{
	std::string Name = "";

	std::cout << "Please enter a zombie name > ";
	getline(std::cin, Name);
	if (std::cin.eof())
		return 1;
	std::string input = "";
	std::cout << "Please enter the number of " << Name << " you want to create > ";
	getline(std::cin, input);
	if (std::cin.eof())
		return 1;
	std::cin.clear();
	int result;
	while (42)
	{
		std::stringstream sstream(input);
		if (sstream >> result && result > 0)
			break ;
		std::cout << "Please enter a valid number of " << Name << " > ";
		getline(std::cin, input);
		if (std::cin.eof())
			return 1;
	}
	Zombie	*horde = zombieHorde(result, Name);
	for (int i = 0; i < result; i++)
	{
		std::cout << "annoucement of zombie n°" << i + 1 << " of the horde of " << Name << std::endl;
		horde[i].announce();
	}
	delete[] horde;
	return 0;
}

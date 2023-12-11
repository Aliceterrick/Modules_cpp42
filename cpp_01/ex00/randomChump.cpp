#include "Zombie.hpp"

void	randomChump(std::string name)
{
	std::cout << ">>(randomChump) Creation of a Zombie" << std::endl;
	Zombie random(name);
	std::cout << ">>(randomChump) Announcement of the Zombie" << std::endl;
	random.announce();
}
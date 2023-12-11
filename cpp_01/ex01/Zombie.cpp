#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

void	Zombie::setName(std::string name, int index)
{
	this->name = name;
	this->index = index;
}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << name << " n°" << index << std::endl;
}

void 	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

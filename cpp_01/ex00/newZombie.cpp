#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
    std::cout << ">>(newZombie) Creation of a Zombie" << std::endl;
    std::cout << ">>(newZombie) Returning its address" << std::endl;
    return (new Zombie(name));
}
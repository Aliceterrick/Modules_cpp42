#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	setHitPoints();
	setEnergyPoints();
	setAttackDamage();
	std::cout << "A ScavTrap without name has spawned" << std::endl;
}

void	ScavTrap::setHitPoints()
{
	HitPoints = 100;
	HpMax = 100;
}

void	ScavTrap::setEnergyPoints()
{
	EnergyPoints = 50;
}

void	ScavTrap::setAttackDamage()
{
	AttackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPoints();
	setEnergyPoints();
	setAttackDamage();
	std::cout << "A new ScavTrap " << name << " has spawned!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy.Name)
{
	*this = toCopy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &toAssign)
{
	std::cout << "This ScavTrap is a copy of the Scav Trap named " << toAssign.Name << std::endl;
	Name = toAssign.Name;
	HitPoints = toAssign.HitPoints;
	EnergyPoints = toAssign.EnergyPoints;
	AttackDamage = toAssign.AttackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "The ScavTrap " << Name << " has now finished their service, they will return to the void" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (HitPoints < 1)
		return ;
	if (EnergyPoints < 5)
	{
		std::cout << Name << " can not attack " << target << ", they are out of energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " damages!" << std::endl;
	EnergyPoints -= 5;
}

void	ScavTrap::guardGate()
{
	if (EnergyPoints < 10)
	{
		std::cout << "ScavTrap " << Name << " can not enter in Gate keeper mode, they are out of energy" << std::endl;
		return ;
	}
	std::cout << "The ScavTrap named " << Name << " is now in Gate keeper mode, caution!" << std::endl;
	EnergyPoints -= 10;
}

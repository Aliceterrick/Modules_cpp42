#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	Name = "no name";
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	HpMax = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "A ClapTrap named " << name << " is born" << std::endl;
	Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
	HpMax = 10;
}

ClapTrap::ClapTrap(const ClapTrap &Claptrap)
{
	*this = Claptrap;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &toAssign)
{
	std::cout << "A copy of " << toAssign.Name << "is born" << std::endl;
	Name = toAssign.Name;
	HitPoints = toAssign.HitPoints;
	EnergyPoints = toAssign.EnergyPoints;
	AttackDamage = toAssign.AttackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << Name << " died as a good ClapTrap, in fight!" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (EnergyPoints == 0)
	{
		std::cout << Name << " can't attack, they are out of energy" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " damages!" << std::endl;
	EnergyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	HitPoints -= amount;
	std::cout << Name << " takes " << amount << " damage!";
	if (HitPoints < 0)
		std::cout << " Unfortunatly, this attack has been fatal for " << Name << "!" << std::endl;
	else
		std::cout << " Now their life is: " << HitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints < 1)
		return ;
	if (EnergyPoints == 0)
	{
		std::cout << Name << " can't be repaired, they are out of energy" << std::endl;
		return ;
	}
	if (HitPoints + amount > (unsigned int)HpMax)
	{
		amount = HpMax - HitPoints;
		HitPoints = HpMax;
	}
	else
		HitPoints += amount;
	std::cout << Name << " recovers " << amount << " hit points" << std::endl;
	std::cout << "Now their life is " << HitPoints << std::endl;
	EnergyPoints--;
}

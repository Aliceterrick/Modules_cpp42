#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setHitPoints();
	setEnergyPoints();
	setAttackDamage();
	std::cout << "A FragTrap not named appears" << std::endl;
}

void	FragTrap::setHitPoints()
{
	HitPoints = 100;
	HpMax = 100;
}

void	FragTrap::setEnergyPoints()
{
	EnergyPoints = 100;
}

void	FragTrap::setAttackDamage()
{
	AttackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPoints();
	setEnergyPoints();
	setAttackDamage();
	std::cout << "a FragTrap named " << name << " appears!" << std::endl;
}

FragTrap::FragTrap(FragTrap &toCopy) : ClapTrap(toCopy.Name)
{
	*this = toCopy;
}

FragTrap	&FragTrap::operator=(FragTrap &toAssign)
{
	std::cout << "This FragTrap is a copy of the original FragTrap " << toAssign.Name << std::endl;
	Name = toAssign.Name;
	HitPoints = toAssign.HitPoints;
	EnergyPoints = toAssign.EnergyPoints;
	AttackDamage = toAssign.AttackDamage;
	HpMax = toAssign.HpMax;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << Name << " is gone. They were a good FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (EnergyPoints < 25)
	{
		std::cout << "FragTrap " << Name << " tried to offer you a high five, ";
		std::cout << "but they are too tired for that" << std::endl;
		return ;
	}
	EnergyPoints -= 25;
	std::cout << Name << " solemnly offers you a high fives! ✋" << std::endl;
}

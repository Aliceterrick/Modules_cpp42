#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	FragTrap::setHitPoints();
	ScavTrap::setEnergyPoints();
	FragTrap::setAttackDamage();
	std::cout << "Oh no! it's terrifiant! it has no name, it has nothing! it's a DiamondTrap" << std::endl;
}
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name")
{
	FragTrap::setHitPoints();
	ScavTrap::setEnergyPoints();
	FragTrap::setAttackDamage();
	Name = name;
	std::cout << "It's named " << name << ", it's a DiamondTrap! it has " << EnergyPoints << " EnergyPoints, " << HitPoints << " HitPoints, and " << AttackDamage << " AttackDamage" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCpy) : ClapTrap(toCpy.Name), ScavTrap(toCpy.Name), FragTrap(toCpy.Name)
{
	*this = toCpy;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &toAssign)
{
	std::cout << "This DiamondTrap is a copy of the monstrer " << toAssign.Name << std::endl;
	Name = toAssign.Name;
	HitPoints = toAssign.HitPoints;
	EnergyPoints = toAssign.EnergyPoints;
	AttackDamage = toAssign.AttackDamage;
	HpMax = toAssign.HpMax;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << Name << " disapears" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	if (EnergyPoints < 5)
	{
		std::cout << "DiamondTrap " << Name << " tried to ask itself some existantial questions "
				  << "but it is too tired for that" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << Name << " has existantial questions. Is it "
			  << Name << " or " << ClapTrap::Name << "?" << std::endl;
	EnergyPoints -= 5;
}

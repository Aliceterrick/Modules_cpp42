#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual	ClapTrap
{
private:

public:
	void	setHitPoints();
	void	setEnergyPoints();
	void	setAttackDamage();
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &toCopy);
	ScavTrap	&operator=(const ScavTrap &toAssign);
	~ScavTrap();
	void	attack(const std::string &target);
	void	guardGate();

};

#endif

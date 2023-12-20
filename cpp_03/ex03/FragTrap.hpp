#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public virtual	ClapTrap
{
private:

public:
	void	setHitPoints();
	void	setEnergyPoints();
	void	setAttackDamage();
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &toCopy);
	FragTrap	&operator=(FragTrap &toAssign);
	~FragTrap();
	void	highFivesGuys(void);
};

#endif

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
protected:
	std::string Name;
	int			HitPoints;
	int			EnergyPoints;
	int			AttackDamage;
	int			HpMax;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &Claptrap);
	ClapTrap	&operator=(const ClapTrap &toAssign);
	~ClapTrap();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
};

#endif

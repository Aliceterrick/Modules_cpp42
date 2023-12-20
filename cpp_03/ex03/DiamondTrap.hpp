#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public virtual	ScavTrap, public virtual	FragTrap
{
	private:
		std::string	Name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &ToCpy);
		DiamondTrap &operator=(const DiamondTrap &ToAssign);
		~DiamondTrap();
		void	attack(const std::string &target);
		void	whoAmI();
};

#endif

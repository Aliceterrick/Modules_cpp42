#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <sstream>
# include <iostream>
# include <iomanip>
# include <limits>
# include <stdlib.h>

class	Zombie
{
private:
	std::string name;
	int			index;

public:
	Zombie(void);
	~Zombie(void);
	void	setName(std::string name, int index);
	void	announce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif

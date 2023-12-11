#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

/* PRINT_COLORS */

# define ITALIC "\033[3m"
# define RED "\e[1;91m"
# define GREEN "\033[32;1m"
# define RESET "\033[0m"

class   Harl
{
private:
	static int	convertLevel(std::string level);
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	void		hmmm(void);
	void		(Harl::*ptr_fonctions[5])(void);

public:
	Harl(void);
	~Harl(void);
	void	complainingAboutComplainDemand();
	void	harlFilter(std::string level);
};

#endif

#include "Harl.hpp"

Harl::Harl(void)
{
	ptr_fonctions[0] = &Harl::debug;
    ptr_fonctions[1] = &Harl::info;
    ptr_fonctions[2] = &Harl::warning;
    ptr_fonctions[3] = &Harl::error;
	ptr_fonctions[4] = &Harl::hmmm;
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
	std::cout << GREEN << "[DEBUG] " << RESET << ITALIC << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-burger. I really do!" << RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << GREEN << "[INFO] " << RESET << ITALIC << "I can not believe adding extra bacon ";
	std::cout << "costs more money. You did not put enough bacon ";
	std::cout << "in my burger! If you did, I would not be asking ";
	std::cout << "for more!" << RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << GREEN << "[WARNING] " << RESET << ITALIC << "I think I deserve to have some extra ";
	std::cout << "bacon for free. I have been coming for years ";
	std::cout << "whereas you started working here since last month!" << RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << GREEN << "[ERROR] " << RESET << ITALIC << "This is unacceptable! I want to speak to the ";
	std::cout << "manager now!" << RESET << std::endl;
}

void	Harl::hmmm(void)
{
	std::cerr << RED << "[Probably complaining about insignificant problems]" << RESET << std::endl;
}

int		Harl::convertLevel(std::string level)
{
	std::string	lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (!lvl[i].compare(level))
			return i;
	}
	return i;
}

void	Harl::harlFilter(std::string level)
{
	switch (convertLevel(level))
	{
		case 0: (this->*ptr_fonctions[0])();
		case 1: (this->*ptr_fonctions[1])();
		case 2: (this->*ptr_fonctions[2])();
		case 3: (this->*ptr_fonctions[3])(); break ;
		default: (this->*ptr_fonctions[4])(); break ;
	}
}

void	Harl::complainingAboutComplainDemand(void)
{
	(this->*ptr_fonctions[4])();
}

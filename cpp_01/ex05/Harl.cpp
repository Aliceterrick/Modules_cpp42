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
	std::cerr << RED << "[HMMM] " << RESET << ITALIC << "I do not know how to complain this way yet..." << std::endl;
	std::cerr << "Can you teach me ?" << RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
		{
			(this->*ptr_fonctions[i])();
			return ;
		}
	}
	(this->*ptr_fonctions[4])();
}

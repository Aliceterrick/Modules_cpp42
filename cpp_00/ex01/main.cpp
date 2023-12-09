#include <iostream>
#include <string>
#include "phoneBook.hpp"

int	main(void)
{
	std::string input;
	phoneBook	book;

	book.welcome();
	while (true)
	{
		std::getline(std::cin, input);
		if (!input.compare("ADD"))
			book.add();
		else if (!input.compare("SEARCH"))
			book.search();
		else if (!input.compare("EXIT"))
		{
			std::cout << "Thanks for using our services, you will be disconected!\n";
			break ;
		}
		if (std::cin.eof())
			break ;
		std::cout << "What do you want to do now ?" << std::endl << "> ";
	}
	return (0);
}

#include "phoneBook.hpp"

phoneBook::phoneBook(void)
{
	total = 0;
	nbrContacts = 0;
}

phoneBook::~phoneBook(void)
{
}

void	phoneBook::welcome(void)
{
	std::cout << "Welcome in your Awesome PhoneBook!" << std::endl;
	std::cout << "You can ADD, SEARCH and EXIT" << std::endl << "> ";
}

void	phoneBook::add(void)
{
	Contact	New;
	int		status = 0;

	New.init(total % 8, status);
	if (status == 0)
		contacts[total % 8] = New;
	total++;
	if (nbrContacts < 8)
		nbrContacts++;
}

void	printHead(void)
{
	std::cout << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nick Name" << std::endl;
}

void	phoneBook::printView(void)
{
	printHead();
	for(int i = 0; i < nbrContacts; i++)
		contacts[i].printInView();
}

void	phoneBook::search(void)
{
	if (nbrContacts == 0)
	{
		std::cout << "No contact yet, please try again later!" << std::endl;
		return ;
	}
	printView();
	std::string input = "";
	std::cout << "Please enter index of the contact you search :" << std::endl << "> ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	int	result;
	while (42)
	{
		std::stringstream sstream(input);
		if (sstream >> result && result > 0 && result <= nbrContacts)
			break ;
		std::cout << "Please enter a valid index" << std::endl << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			return ;
	}
	contacts[result - 1].printContact();
}


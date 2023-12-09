#include "contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::getInputLittleAlnum(std::string output, int &status) const
{
	std::string input = "";

	if (status == 1)
		return input;
	std::cout << output;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		status = 1;
		return input;
	}
	if (input.empty())
		return (std::cout << "Please enter something\n", getInputLittleAlnum(output, status));
	if (input.size() > 30)
		return (std::cout << "Please enter no more than 30 characters\n", getInputLittleAlnum(output, status));
	for (int i = 0; input[i]; i++)
	{
		if (!isalnum(input[i]))
			return (std::cout << "Please enter only alphanumerics characters\n", getInputLittleAlnum(output, status));
	}
	return input;
}

std::string Contact::getInputBigAlnum(std::string output, int &status) const
{
	std::string input = "";

	if (status == 1)
		return input;
	std::cout << output;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		status = 1;
		return input;
	}
	if (input.empty())
		return (std::cout << "(Please enter something)\n", getInputBigAlnum(output, status));
	if (input.size() > 300)
		return (std::cout << "(Please enter no more than 300 characters)\n", getInputBigAlnum(output, status));
	for (int i = 0; input[i]; i++)
	{
		if (!isalnum(input[i]) && !isspace(input[i]))
			return (std::cout << "(Please enter only alphanumerics characters)\n", getInputBigAlnum(output, status));
	}
	return (input);
}

std::string Contact::getInputNum(std::string output, int &status) const
{
	std::string input = "";

	if (status == 1)
		return input;
	std::cout << output;
	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		status = 1;
		return input;
	}
	for (int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]))
			return (std::cout << "(Please enter only digits)\n", getInputNum(output, status));
	}
	if(input.size() != 10)
		return (std::cout << "(Please enter a phone number with 10 digits)\n", getInputNum(output, status));
	return (input);
}

void	Contact::init(int ind, int &status)
{

	firstName = getInputLittleAlnum("Please enter the first name of the current contact:\n> ", status);
	lastName = getInputLittleAlnum("Please enter their last name:\n> ", status);
	nickName = getInputLittleAlnum("Please enter their nickname:\n> ", status);
	phoneNumber = getInputNum("Please enter their phone number:\n> ", status);
	darkestSecret = getInputBigAlnum("And finnaly their darkest secret:\n> ", status);
	if (status == 1)
		return ;
	index = ind + 1;
}

std::string	cutStr(std::string str)
{
	if (str.size() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::printInView(void)
{
	std::cout << std::setw(10) << index;
	std::cout << "|" << std::setw(10) << cutStr(firstName);
	std::cout << "|" << std::setw(10) << cutStr(lastName);
	std::cout << "|" << std::setw(10) << cutStr(nickName) << std::endl;
}

void	Contact::printContact(void)
{
	std::cout << "#### CONTACT n°" << index << " ####" << std::endl;
	std::cout << "First Name:\t" << firstName << std::endl;
	std::cout << "Last Name:\t" << lastName << std::endl;
	std::cout << "Nickname:\t" << nickName << std::endl;
	std::cout << "Phone Number:\t" << phoneNumber << std::endl;
	std::cout << "Darkest Secret:\t";
 	for (int i = 0; darkestSecret[i]; i++)
	{
		if (!isspace(darkestSecret[i]))
			std::cout << "*";
		else
			std::cout << darkestSecret[i];
	}
	std::cout << std::endl;
}

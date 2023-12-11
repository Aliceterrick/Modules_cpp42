#include <string>
#include <iostream>
#include <iomanip>

int	main()
{
	std::string brainAnnouncement = "*HI THIS IS BRAIN*";
	std::string	*stringPTR = &brainAnnouncement;
	std::string	&stringREF = brainAnnouncement;

	std::cout << "#### ADRESSES ####" << std::endl << std::endl;
	std::cout << "string" << std::setw(5) << ": " << &brainAnnouncement << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout << std::endl << "#### VALUES ####" << std::endl << std::endl;
	std::cout << "string" << std::setw(6) << ": " << brainAnnouncement << std::endl;
	std::cout << "*stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF" << std::setw(3) << ": " << stringREF << std::endl;
}

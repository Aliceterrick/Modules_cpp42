#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class	Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
	int			index;

	std::string getInputLittleAlnum(std::string output, int &status) const;
	std::string getInputBigAlnum(std::string output, int &status) const;
	std::string getInputNum(std::string output, int &status) const;

public:
	Contact(void);
	~Contact(void);
	void	init(int ind, int &status);
	void	printContact(void);
	void	printInView(void);
};

#endif

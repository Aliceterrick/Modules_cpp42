#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include <string>
# include <sstream>
# include "contact.hpp"

class phoneBook
{
private:
	Contact	contacts[8];
	int		nbrContacts;
	int		total;
	void	printView(void);

public:
	phoneBook(void);
	~phoneBook(void);
	void	welcome(void);
	void	add(void);
	void	search(void);
};

#endif
#include <iostream>
#include "PhoneBookItem.hpp"

class PhoneBook
{
public:
	PhoneBook(void);
	~PhoneBook(void);
	void			add(void);
	void			search(void);
	void			exit(const char *msg);
private:
	void			print_all(void);
	void			print_one(void);
	std::string		get_input(const char *msg);

	PhoneBookItem	items[8];
	int				size;
};

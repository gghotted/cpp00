#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	cmd;

	while (1)
	{
		std::cout << "cmd: ";

		if (!(std::cin >> cmd))
			phoneBook.exit("\nexit by EOF");
		else if (cmd.compare("EXIT") == 0)
			phoneBook.exit("bye ~");
		else if (cmd.compare("ADD") == 0)
			phoneBook.add();
		else if (cmd.compare("SEARCH") == 0)
			phoneBook.search();
		else
			std::cout << "invalid command! try again!\n";
	}
}

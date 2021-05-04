#include <string>
#include <iomanip>
#include <iostream>

class PhoneBookItem
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	login;
	std::string	postalAddress;
	std::string	email;
	std::string	phoneNumber;
	std::string	birthday;
	std::string	favoriteMeal;
	std::string	underwearColor;
	std::string	darkestSecret;
public:
	PhoneBookItem(
		std::string	firstName,
		std::string	lastName,
		std::string	nickname,
		std::string	login,
		std::string	postalAddress,
		std::string	email,
		std::string	phoneNumber,
		std::string	birthday,
		std::string	favoriteMeal,
		std::string	underwearColor,
		std::string	darkestSecret);
	~PhoneBookItem(void);
	void		print_summary(int index);
	void		print_detail(void);
	static void	print_column(std::string str, std::string end="\n");
	static void	print_keyval(std::string key, std::string val);
};

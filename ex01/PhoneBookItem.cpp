#include "PhoneBookItem.hpp"

PhoneBookItem::PhoneBookItem(void) {}

PhoneBookItem::PhoneBookItem(
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
  std::string	darkestSecret
)
{
  this->firstName = firstName;
  this->lastName = lastName;
  this->nickname = nickname;
  this->login = login;
  this->postalAddress = postalAddress;
  this->email = email;
  this->phoneNumber = phoneNumber;
  this->birthday = birthday;
  this->favoriteMeal = favoriteMeal;
  this->underwearColor = underwearColor;
  this->darkestSecret = darkestSecret;
}

PhoneBookItem::~PhoneBookItem(void) {}

void PhoneBookItem::print_column(std::string str, std::string end)
{
  if (str.length() > 10)
    str.replace(9, 1, ".");
  std::cout << std::setfill(' ') << std::setw(10) << std::right;
  std::cout << str.substr(0, 10) << end;
}

void PhoneBookItem::print_keyval(std::string key, std::string val)
{
  std::cout << std::setfill(' ') << std::setw(15) << std::left;
  std::cout << key;
  std::cout << ": " << val << "\n";
}

void PhoneBookItem::print_summary(int index)
{
  this->print_column(std::to_string(index), "|");
  this->print_column(this->firstName, "|");
  this->print_column(this->lastName, "|");
  this->print_column(this->nickname);
}

void PhoneBookItem::print_detail(void)
{
  this->print_keyval("firstName", this->firstName);
  this->print_keyval("lastName", this->lastName);
  this->print_keyval("nickname", this->nickname);
  this->print_keyval("login", this->login);
  this->print_keyval("postalAddress", this->postalAddress);
  this->print_keyval("email", this->email);
  this->print_keyval("phoneNumber", this->phoneNumber);
  this->print_keyval("birthday", this->birthday);
  this->print_keyval("favoriteMeal", this->favoriteMeal);
  this->print_keyval("underwearColor", this->underwearColor);
  this->print_keyval("darkestSecre", this->darkestSecret);
}

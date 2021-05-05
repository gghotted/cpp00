#ifndef PHONE_BOOK_ITEM_HPP
#define PHONE_BOOK_ITEM_HPP

#include <string>
#include <iomanip>
#include <iostream>

class PhoneBookItem
{
 public:
  PhoneBookItem(void);
  PhoneBookItem(std::string	firstName,
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

  void printSummary(int index);
  void printDetail(void);

  static void printColumn(std::string str, std::string end="\n");
  static void printKeyVal(std::string key, std::string val);

 private:
  std::string firstName;
  std::string lastName;
  std::string nickname;
  std::string login;
  std::string postalAddress;
  std::string email;
  std::string phoneNumber;
  std::string birthday;
  std::string favoriteMeal;
  std::string underwearColor;
  std::string darkestSecret;
};

#endif

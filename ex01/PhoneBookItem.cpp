#include "PhoneBookItem.hpp"

PhoneBookItem::PhoneBookItem(void) {}

PhoneBookItem::PhoneBookItem(std::string firstName,
                             std::string lastName,
                             std::string nickname,
                             std::string login,
                             std::string postalAddress,
                             std::string email,
                             std::string phoneNumber,
                             std::string birthday,
                             std::string favoriteMeal,
                             std::string underwearColor,
                             std::string darkestSecret) {
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

void PhoneBookItem::printColumn(std::string str, std::string end) {
  if (str.length() > 10)
    str.replace(9, 1, ".");
  std::cout << std::setfill(' ') << std::setw(10) << std::right;
  std::cout << str.substr(0, 10) << end;
}

void PhoneBookItem::printKeyVal(std::string key, std::string val) {
  std::cout << std::setfill(' ') << std::setw(15) << std::left;
  std::cout << key;
  std::cout << ": " << val << "\n";
}

void PhoneBookItem::printSummary(int index) {
  this->printColumn(std::to_string(index), "|");
  this->printColumn(this->firstName, "|");
  this->printColumn(this->lastName, "|");
  this->printColumn(this->nickname);
}

void PhoneBookItem::printDetail(void) {
  this->printKeyVal("firstName", this->firstName);
  this->printKeyVal("lastName", this->lastName);
  this->printKeyVal("nickname", this->nickname);
  this->printKeyVal("login", this->login);
  this->printKeyVal("postalAddress", this->postalAddress);
  this->printKeyVal("email", this->email);
  this->printKeyVal("phoneNumber", this->phoneNumber);
  this->printKeyVal("birthday", this->birthday);
  this->printKeyVal("favoriteMeal", this->favoriteMeal);
  this->printKeyVal("underwearColor", this->underwearColor);
  this->printKeyVal("darkestSecre", this->darkestSecret);
}

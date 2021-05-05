#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
  this->size = 0;
}

PhoneBook::~PhoneBook(void) {}

std::string PhoneBook::getInput(const char *msg) {
  std::cout << msg;
  std::string input;
  std::getline(std::cin, input);
  if (std::cin.eof())
    this->exit("\nexit by EOF");
  return input;
}

void PhoneBook::add(void) {
  if (this->size == 8) {
    std::cout << "PhoneBook is full\n";
    return ;
  }
  this->items[this->size++] = PhoneBookItem(this->getInput("firstName: "),
                                            this->getInput("lastName: "),
                                            this->getInput("nickname: "),
                                            this->getInput("login: "),
                                            this->getInput("postalAddress: "),
                                            this->getInput("email: "),
                                            this->getInput("phoneNumber: "),
                                            this->getInput("birthday: "),
                                            this->getInput("favoriteMeal: "),
                                            this->getInput("underwearColor: "),
                                            this->getInput("darkestSecret: "));
}

void PhoneBook::printAll(void) {
  PhoneBookItem::printColumn("Index", "|");
  PhoneBookItem::printColumn("FirstName", "|");
  PhoneBookItem::printColumn("LastName", "|");
  PhoneBookItem::printColumn("Nickname");
  for (int i=0; i < this->size; i++)
    this->items[i].printSummary(i);
}

void PhoneBook::printOne(void) {
  const char *input = this->getInput("select index: ").c_str();
  char *end;
  int index = std::strtol(input, &end, 10);
  if (*end != '\0' || index < 0 || index >= this->size) {
    std::cout << "invalid index! try again!\n";
    this->printOne();
    return ;
  }
  this->items[index].printDetail();
}

void PhoneBook::search(void) {
  if (this->size == 0) {
    std::cout << "phonebook is empty!\n";
    return ;
  }
  this->printAll();
  this->printOne();
}

void PhoneBook::exit(const char *msg) {
  std::cout << "\n" << msg << "\n";
  ::exit(0);
}

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
  this->size = 0;
}

PhoneBook::~PhoneBook(void) {}

std::string PhoneBook::get_input(const char *msg) {
  std::string	input;

  std::cout << msg;
  if (!(std::cin >> input))
    this->exit("\nexit by EOF");
  return (input);
}

void PhoneBook::add(void) {
  if (this->size == 8) {
    std::cout << "PhoneBook is full\n";
    return ;
  }

  this->items[this->size++] = PhoneBookItem(
    this->get_input("firstName: "),
    this->get_input("lastName: "),
    this->get_input("nickname: "),
    this->get_input("login: "),
    this->get_input("postalAddress: "),
    this->get_input("email: "),
    this->get_input("phoneNumber: "),
    this->get_input("birthday: "),
    this->get_input("favoriteMeal: "),
    this->get_input("underwearColor: "),
    this->get_input("darkestSecret: ")
  );
}

void PhoneBook::print_all(void) {
  PhoneBookItem::print_column("Index", "|");
  PhoneBookItem::print_column("FirstName", "|");
  PhoneBookItem::print_column("LastName", "|");
  PhoneBookItem::print_column("Nickname");

  for (int i=0; i < this->size; i++)
    this->items[i].print_summary(i);
}

void PhoneBook::print_one(void) {
  int	index;

  std::cout << "select index: ";
  if (!(std::cin >> index))
    this->exit("exit by EOF");

  if (index < 0 || index >= this->size) {
    std::cout << "invalid index! try again!\n";
    this->print_one();
    return ;
  }

  this->items[index].print_detail();
}

void PhoneBook::search(void) {
  if (this->size == 0) {
    std::cout << "phonebook is empty!\n";
    return ;
  }

  this->print_all();
  this->print_one();
}

void PhoneBook::exit(const char *msg) {
  std::cout << "\n" << msg << "\n";
  ::exit(0);
}

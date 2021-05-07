#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <iostream>
#include "PhoneBookItem.hpp"

class PhoneBook
{
 public:
  PhoneBook(void);
  ~PhoneBook(void);

  void add(void);
  void search(void);
  void exit(const char *msg);

 private:
  void printAll(void);
  void printOne(void);
  std::string getInput(const char *msg);
  int parseIndex(std::string str);

  PhoneBookItem items[8];
  int size;
};

#endif

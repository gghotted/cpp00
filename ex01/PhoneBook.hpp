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

  PhoneBookItem items[8];
  int size;
};

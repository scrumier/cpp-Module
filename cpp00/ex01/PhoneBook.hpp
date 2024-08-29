#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	void exit() const;
	void add();
	void search();
	void prompt() const;

private:
	Contact _contacts[8];
};

#endif
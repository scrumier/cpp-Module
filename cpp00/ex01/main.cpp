#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string input;

	phoneBook.prompt();
	while(true){
		std::cout << "Enter your choice: ";
		std::getline(std::cin, input);
		if (input == "EXIT") {
			break;
		} else if (input == "ADD") {
			phoneBook.add();
		} else if (input == "SEARCH") {
			phoneBook.search();
		}
	}
	phoneBook.exit();
	return 0;
}
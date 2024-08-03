#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string input;

	// color it
	std::cout << "\033[1;32mWelcome to the Phone Book!\033[0m" << std::endl;
	std::cout << "\033[1;34mUsage:\033[0m" << std::endl;
	std::cout << "\033[1;33mADD:\033[0m Add a new contact" << std::endl;
	std::cout << "\033[1;33mSEARCH:\033[0m Search for a contact" << std::endl;
	std::cout << "\033[1;33mEXIT:\033[0m Exit the program" << std::endl << std::endl;
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
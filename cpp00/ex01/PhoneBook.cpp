#include "PhoneBook.hpp"

#include <iomanip>
#include <iostream>
#include <limits>
#include <sstream>

PhoneBook::PhoneBook(){
}

PhoneBook::~PhoneBook(){
}

void PhoneBook::prompt() const{
	std::cout << "\033[1;32mWelcome to the Phone Book!\033[0m" << std::endl;
	std::cout << "\033[1;34mUsage:\033[0m" << std::endl;
	std::cout << "\033[1;33mADD:\033[0m Add a new contact" << std::endl;
	std::cout << "\033[1;33mSEARCH:\033[0m Search for a contact" << std::endl;
	std::cout << "\033[1;33mEXIT:\033[0m Exit the program" << std::endl << std::endl;
}

void PhoneBook::exit() const{
	std::cout << "Exiting..." << std::endl;
}

void PhoneBook::add() {
	static int size;
	this->_contacts[size % 8].setInfo();
	size++;
}

std::string truncateAndAlign(const std::string& str, int width) {
	if (str.length() > static_cast<std::string::size_type>(width)) {
		return str.substr(0, width - 1) + ".";
	} else {
		std::stringstream ss;
		ss << std::setw(width) << std::right << str;
		return ss.str();
	}
}

void PhoneBook::search() {
	std::cout << "     index|first name| last name| nickname |" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::string info = this->_contacts[i].getFirstName();
		if (!info.empty()) {
			std::cout << std::setw(10) << i << "|"
					  << truncateAndAlign(this->_contacts[i].getFirstName(), 10) << "|"
					  << truncateAndAlign(this->_contacts[i].getLastName(), 10) << "|"
					  << truncateAndAlign(this->_contacts[i].getNickName(), 10) << "|"
					  << std::endl;
		}
	}

	int index;
	std::cout << "Enter the index of the contact to display: ";
	if (!(std::cin >> index) || index < 0 || index >= 8 || this->_contacts[index].getFirstName().empty()) {
		std::cout << "Invalid index." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		return;
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << this->_contacts[index].printInfo() << std::endl;
}
#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(){

}

PhoneBook::~PhoneBook(){

}

void PhoneBook::exit() const{
	std::cout << "Exiting..." << std::endl;
}

void PhoneBook::add() {
	static int size;
	this->_contacts[size % 8].setInfo();
	size++;
}

void PhoneBook::search() const{
	std::cout << "SEARCH has been pressed" << std::endl;
}
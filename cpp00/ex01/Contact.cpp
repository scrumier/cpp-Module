#include "Contact.hpp"

std::string Contact::_getInput(std::string const prompt) const{
	std::string input;
	bool isValid;

	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!std::cin.good() && input.empty()) {
			std::cout << "Please enter a valid input" << std::endl;
		}
		else {
			isValid = true;
		}
	} while (!isValid);

	return input;
}

void Contact::setInfo(){
	this->_firstName = this->_getInput("Please enter you first name: ");
	this->_lastName = this->_getInput("Please enter you last name: ");
	this->_nickName = this->_getInput("Please enter you nick name: ");
	this->_phoneNumber = this->_getInput("Please enter you phone number: ");
	this->_darkestSecret = this->_getInput("Please enter you darkest secret: ");
	std::cout << std::endl;
}
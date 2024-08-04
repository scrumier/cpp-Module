#include "Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

std::string Contact::_getInput(std::string const prompt) const{
	std::string input;
	bool isValid = false;

	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (!std::cin.good() || input.empty() || input == "\n") {
			std::cout << "\033[1;31mPlease enter a valid input\033[0m" << std::endl;
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

std::string Contact::printInfo() {
	std::string output;

	output += "First Name: " + this->_firstName + "\n";
	output += "Last Name: " + this->_lastName + "\n";
	output += "Nick Name: " + this->_nickName + "\n";
	output += "Phone Number: " + this->_phoneNumber + "\n";
	output += "Darkest Secret: " + this->_darkestSecret + "\n";
	return output;
}

std::string Contact::getFirstName() const { return _firstName; }
std::string Contact::getLastName() const { return _lastName; }
std::string Contact::getNickName() const { return _nickName; }
std::string Contact::getPhoneNumber() const { return _phoneNumber; }
std::string Contact::getDarkestSecret() const { return _darkestSecret; }


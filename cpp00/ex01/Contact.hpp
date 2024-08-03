#include <iostream>


class Contact {
public:
	Contact();
	~Contact();
	void setInfo();
	std::string printInfo();
	std::string _getInput(std::string prompt) const;
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

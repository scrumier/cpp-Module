#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>


class Contact {
public:
	Contact();
	~Contact();
	void setInfo();
	std::string printInfo();
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
	std::string _getInput(std::string prompt) const;
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
};

#endif
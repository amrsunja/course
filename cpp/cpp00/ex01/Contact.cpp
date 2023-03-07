#include "Contact.hpp"

Contact::Contact(void) {}
Contact::~Contact(void) {}

void Contact::printContactInfo(void) const {
	std::cout << "[First name]   | " << this->getFirstName() << '\n';
	std::cout << "[Last name]    | " << this->getLastName() << '\n';
	std::cout << "[Nickname]     | " << this->getNickname() << '\n';
	std::cout << "[Phone number] | " << this->getPhoneNumber() << '\n';
	std::cout << "[Secret]       | " << this->getSecret() << '\n';
}

void Contact::createContact(
	std::string fname,
	std::string lname,
	std::string nick,
	std::string number,
	std::string secret) {
		this->_firstName = fname;
		this->_lastName = lname;
		this->_nickname = nick;
		this->_phoneNumber = number;
		this->_secret = secret;
}

std::string Contact::getFirstName(void) const {
	return this->_firstName;
}
std::string Contact::getLastName(void) const {
	return this->_lastName;
}
std::string Contact::getNickname(void) const {
	return this->_nickname;
}
std::string Contact::getPhoneNumber(void) const {
	return this->_phoneNumber;
}
std::string	Contact::getSecret(void) const {
	return this->_secret;
}

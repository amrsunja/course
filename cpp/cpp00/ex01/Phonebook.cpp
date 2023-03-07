#include "Phonebook.hpp"
#include "Contact.hpp"
#include <cctype>
#include <vector>

PhoneBook::PhoneBook(void) {
	this->_index = 0;
	this->_savedContactsCount = 0;
}
PhoneBook::~PhoneBook(void) {}

std::string PhoneBook::_addSpaces(std::string str) {
	size_t i = 10 - str.length();
	std::string newStr;

	while (i--) newStr.append(" ");
	return (newStr.append(str));
}

std::string PhoneBook::_resizeStr(std::string str) {
	if (str.length() > 10) {
		str.resize(10);
		str[str.length() - 1] = '.';
	}
	return (str);
}

void PhoneBook::_printContactsTable(void) {
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < 8; i++) {
		Contact contact = this->_contacts[i];
		std::cout
			<< "|         " << i + 1 << '|' 
			<< this->_addSpaces(this->_resizeStr(contact.getFirstName())) << "|"
			<< this->_addSpaces(this->_resizeStr(contact.getLastName())) <<  "|"
			<< this->_addSpaces(this->_resizeStr(contact.getNickname())) <<  "|\n";
	}
	std::cout << "---------------------------------------------" << std::endl;
}

std::string PhoneBook::getFieldLabel(int fieldIndex) const {
	switch(fieldIndex) {
		case 0: return "[First Name]   : ";
		case 1: return "[Last Name]    : ";
		case 2: return "[Nickname]     : ";
		case 3: return "[Phone Number] : ";
		default: return"[Secret]       : ";
	}
}


void PhoneBook::addNewContact(void) {
	//[fname, lname, nick, number, secret];
	std::string requiredFields[5];
	int i = 0;

	while (i < 5) {
		std::cout << getFieldLabel(i);
		std::getline(std::cin, requiredFields[i]);
		if (requiredFields[i] == "#cancel")
			return;
		if (requiredFields[i][0]) i++;
	}

	this->_contacts[this->_index % 8].createContact(
		requiredFields[0],
		requiredFields[1],
		requiredFields[2],
		requiredFields[3],
		requiredFields[4]
	);
	this->_index++;
	this->_savedContactsCount++;
	std::cout << "[#] Contact created [#]\n\n";
}


void PhoneBook::searchContact(void) {
	int contactIndex;
	std::string input;

	this->_printContactsTable();

	while (input != "#cancel") {
		std::cout<< "[enter contact index] <> ";
		std::getline(std::cin, input);
		if (input[0] >= '1' && input[0] <= '8' && input.length() == 1) {
			contactIndex = std::stoi(input);
			if (this->_contacts[contactIndex - 1].getFirstName()[0])
				this->_contacts[contactIndex-1].printContactInfo();
		}
	}
}

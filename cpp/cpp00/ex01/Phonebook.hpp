#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Contact.hpp"

class	PhoneBook {
	private:
		int _index;
		int _savedContactsCount;
		Contact _contacts[8];

		void _printContactsTable(void);
		std::string _addSpaces(std::string str);
		std::string _resizeStr(std::string str);

	public:
		PhoneBook(void);
		~PhoneBook(void);

		std::string getFieldLabel(int fieldIndex) const;

		void addNewContact(void);
		void searchContact(void);
};

#endif

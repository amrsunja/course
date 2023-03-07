#include "Phonebook.hpp"
#include <cctype>

std::string toLowerCase(std::string str) {
	char lowerCaseString[str.length()];

	for (int i = 0; i < (int)str.length(); i++)
		lowerCaseString[i] = tolower(str[i]);
	lowerCaseString[str.length()] = 0;

	return (lowerCaseString);
}

void print(std::string str) {
	std::cout << str << std::endl;
}

int main(void) {
	PhoneBook phonebook;
	std::string command;

	while (command != "exit" && command != "3") {
		print(" _____________________________ ");
		print("| 1 (ADD)    - Add contact    |");
		print("| 2 (SEARCH) - Search contact |");
		print("| 3 (EXIT)   - Exit program   |");
		print(" ============================= ");
		print("[or you can just type '#cancel' to cancel]");
		std::cout << "\nyour choice ==> ";

		std::getline(std::cin, command);
		command = toLowerCase(command);
		print("");
		if (command == "add" || command == "1")
			phonebook.addNewContact();
		else if (command == "search" || command == "2")
			phonebook.searchContact();
	}

	return (0);
}

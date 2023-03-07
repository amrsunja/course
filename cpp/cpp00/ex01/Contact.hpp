#ifndef CONTACT_HPP

# define CONTACT_HPP 

# include <iostream>
# include <string>

class	Contact {
	private:
		std::string _firstName, _lastName, _nickname, _phoneNumber, _secret;

	public:
		Contact(void);
		~Contact(void);

		std::string getFirstName(void) const;
		std::string getLastName(void) const;
		std::string getNickname(void) const;
		std::string getPhoneNumber(void) const;
		std::string getSecret(void) const;

		void createContact(
			std::string fname,
			std::string lname,
			std::string nick,
			std::string number,
			std::string secret
		);
		void printContactInfo(void) const;
};

#endif

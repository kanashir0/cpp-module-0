#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact ctt_list[8];
		int index;
	public:
		PhoneBook();
		void addContact();
        void searchContact();
        void displayHelp();
	};

#endif
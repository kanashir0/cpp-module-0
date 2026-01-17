#include "../include/Contact.hpp"
#include "../include/PhoneBook.hpp"

int	main(void) {
	PhoneBook pb = PhoneBook();
	std::string cmd;

	while (true) {
		pb.displayHelp();
		std::getline(std::cin, cmd);
		if (cmd == "") {
			continue ;
		}
		if (cmd == "ADD") {
			pb.addContact();
		} else if (cmd == "SEARCH") {
			pb.searchContact();
		} else if (cmd == "EXIT") {
			return (0);
		} else {
			std::cout << "Command not found!" << std::endl;
			continue ;
		}
	}
}
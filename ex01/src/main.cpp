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
		if (cmd == "add") {
			pb.addContact();
		} else if (cmd == "search") {
			pb.searchContact();
		} else if (cmd == "exit") {
			return (0);
		} else {
			continue ;
		}
	}
}
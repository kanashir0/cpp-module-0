# include "../include/PhoneBook.hpp"

std::string get_shortcut(std::string s) {
    if (s.length() >= 10)
        return s.substr(0, 9) + ".";
    return s;
};

PhoneBook::PhoneBook() {
    this->index = 0;
}

void PhoneBook::displayHelp() {
    std::cout << "> Choose your command [ADD, SEARCH, EXIT]:" << std::endl;
}

void PhoneBook::addContact() {
    Contact ctt;
    std::string first_name;
    std::string last_name;
    std::string nick_name;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "You need to fill some information about the new contact: " << std::endl;
    std::cout << "First name: ";
    std::getline(std::cin, first_name);
    ctt.setFirstName(first_name);

    std::cout << "Last name: ";
    std::getline(std::cin, last_name);
    ctt.setLastName(last_name);

    std::cout << "Nickname: ";
    std::getline(std::cin, nick_name);
    ctt.setNickname(nick_name);

    std::cout << "Phone number: ";
    std::getline(std::cin, phone_number);
    ctt.setPhoneNumber(phone_number);

    std::cout << "Darkest Secret: ";
    std::getline(std::cin, darkest_secret);
    ctt.setDarkestSecret(darkest_secret);

    this->ctt_list[this->index] = ctt;
    if (this->index >= 7)
        this->index = 0;
    else
        this->index++;
}

void PhoneBook::searchContact() {
    int choice;
    int i;

    if (this->ctt_list[0].getFirstName() == "") {
        std::cout << "No records in your PhoneBook!" << std::endl;
        return ;
    }
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    i = 0;
    while (i < 8) {
        if (this->ctt_list[i].getFirstName() == "")
            break ;
        std::cout << "|" << std::setw(10) << i << 
        "|" << std::setw(10) << get_shortcut(this->ctt_list[i].getFirstName()) << 
        "|" << std::setw(10) << get_shortcut(this->ctt_list[i].getLastName()) << 
        "|" << std::setw(10) << get_shortcut(this->ctt_list[i].getNickname()) << 
        "|" << std::endl;
        i++;
    }
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    std::cout << "Select an index to view more details:" << std::endl;
    std::string input_choice;
    std::getline(std::cin, input_choice);
    if (input_choice.length() == 1 && std::isdigit(input_choice[0]))
        choice = input_choice[0] - '0';
    else
        choice = -1;
    if (choice >= 0 && choice < 8 && choice < i)
        this->ctt_list[choice].getContact();
    else
        std::cout << "Contact not found or out of range!" << std::endl;
}
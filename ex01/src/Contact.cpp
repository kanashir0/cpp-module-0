#include "../include/Contact.hpp"

Contact::Contact() {
    FirstName = "";
    LastName = "";
    Nickname = "";
    PhoneNumber = "";
    DarkestSecret = "";
};

std::string Contact::getFirstName(void) {
    return this->FirstName;
};

std::string Contact::getLastName(void) {
    return this->LastName;
};

std::string Contact::getNickname(void) {
    return this->Nickname;
};

std::string Contact::getPhoneNumber(void) {
    return this->PhoneNumber;
};

std::string Contact::getDarkestSecret(void) {
    return this->DarkestSecret;
};

void Contact::setFirstName(std::string first_name) {
    this->FirstName = first_name;
};

void Contact::setLastName(std::string last_name) {
    this->LastName = last_name;
};

void Contact::setNickname(std::string nick_name) {
    this->Nickname = nick_name;
};

void Contact::setPhoneNumber(std::string phone_number) {
    this->PhoneNumber = phone_number;
};

void Contact::setDarkestSecret(std::string darkest_secret) {
    this->DarkestSecret = darkest_secret;
};
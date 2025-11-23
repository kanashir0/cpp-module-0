#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		Contact();
		void setFirstName(std::string first_name);
		void setLastName(std::string last_name);
		void setNickname(std::string nick_name);
		void setPhoneNumber(std::string phone_number);
		void setDarkestSecret(std::string darkest_secret);
		std::string getFirstName(void);
		std::string getLastName(void);
		std::string getNickname(void);
		std::string getPhoneNumber(void);
		std::string getDarkestSecret(void);
		void getContact(void);
	};

#endif
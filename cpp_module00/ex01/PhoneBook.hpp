#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	darkest_secret;
		std::string	phone_number;

	public:
		void print_contact(int num);
		void set_fn(std::string &first_name);
		void set_ln(std::string &last_name);
		void set_nn(std::string &nick_name);
		void set_pn(std::string &phone_number);
		void set_ds(std::string &darkest_secret);
		void print_contact_details(void);
		bool getfound(void);

};

class PhoneBook
{
	private:
		void display_contact(void);
		int	num;
		Contact arr[8];
	public:
		PhoneBook(void);
		void add_contact(void);
		void search_contact(void);
};

#endif
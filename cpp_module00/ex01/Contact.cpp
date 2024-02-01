#include "PhoneBook.hpp"

void Contact::print_contact(int num)
{
	std::cout << std::setw(10) <<std::right;
	std::cout << num << "|";
	std::cout << std::setw(10) <<std::right;
	if (first_name.length() > 10)
		std::cout << first_name.substr(0,9).append(".") << "|";
	else
		std::cout << first_name << "|";
	std::cout << std::setw(10) <<std::right;
	if (last_name.length() > 10)
		std::cout << last_name.substr(0,9).append(".") << "|";
	else
		std::cout << last_name << "|";
	std::cout << std::setw(10) <<std::right;
	if (nick_name.length() > 10)
		std::cout << nick_name.substr(0,9).append(".") << "|";
	else
		std::cout << nick_name << "|";
	std::cout << std::endl;
}

void Contact::print_contact_details(void)
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nick Name: " << nick_name << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

void Contact::set_fn(std::string &first_name)
{
	this->first_name = first_name;

}
void Contact::set_ln(std::string &last_name)
{
	this->last_name = last_name;
}

void Contact::set_nn(std::string &nick_name)
{
	this->nick_name = nick_name;
}

void Contact::set_pn(std::string &phone_number)
{
	this->phone_number = phone_number;
}

void Contact::set_ds(std::string &darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
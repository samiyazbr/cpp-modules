#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : num(0) {}

void PhoneBook::add_contact(void)
{
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

	std::cout << "Enter First Name: " << std::endl;
	std::cin >> first_name;
	std::cout << "Enter Last Name: " << std::endl;
	std::cin >> last_name;
	std::cout << "Enter Nick Name: " << std::endl;
	std::cin >> nick_name;
	std::cout << "Enter Phone Number: " << std::endl;
	std::cin >> phone_number;
	std::cout << "Enter Darkest Secret: " << std::endl;
	std::cin >> darkest_secret;
	//arr[num] = Contact(first_name, last_name, nick_name, darkest_secret, phone_number);
	arr[num].set_fn(first_name);
	arr[num].set_ln(last_name);
	arr[num].set_nn(nick_name);
	arr[num].set_pn(phone_number);
	arr[num].set_ds(darkest_secret);
	if (num == 8)
		num = 0;
	num++;
}

void PhoneBook::display_contact(void)
{
	std::cout << "| INDEX | FIRST_NAME | LAST_NAME | NICK_NAME |" << std::endl;
	for (int i = 0; i < num; i++)
	{
		arr[i].print_contact(i);
	}
}

void PhoneBook::search_contact(void)
{
	std::string ContactID;
	int ContactId;
	bool ValidInput = true;
	display_contact();
	std::cout << "Choose a Contact" << std::endl;
	std::cin >> ContactID;
	std::cout << "contact: " << ContactID;
	if(!(std::istringstream(ContactID) >> ContactId))
		ValidInput = false;
	if (!std::cin || ContactId < 0 || ContactId >= 8
		|| ValidInput == false || ContactID.length() == 0)
	{
		std::cout << "Invalid Contact" << std::endl;
	}
	else
	{
		arr[ContactId].print_contact_details();

	}
	std::cout << std::endl;
}
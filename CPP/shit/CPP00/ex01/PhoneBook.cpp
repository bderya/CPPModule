#include "Contact.hpp"
#include "PhoneBook.hpp"

Phonebook::Phonebook(){
	index = 0;
	flag = 0;
}
Phonebook::~Phonebook(){}

void Phonebook::add_contact(void)
{
	int i = 0;

	if(this->index == 8)
	{
		std::cout<<"Your contact is full, reasing old contact"<<std::endl;
		this->index2 = this->index;
		this->index = 0;
		this->flag = 1;
	}
	if(this->flag == 1)
	{
		std::string text = "Erasing Index Number:";
		text += std::to_string(this->index);
		std::cout<<text<<std::endl;
	}
	this->contact[index].function_add();
	this->index++;
	if(flag == 0)
		this->index2 = this->index;
}

void Phonebook::print_contact(void)
{
	for(int number = 0; number < this->index2; number++)
	{
		this->contact[number].function_print(number);
	}
}

void Phonebook::search_contact(void)
{
	std::string scan;
	int	decision = 11;
	std::cout<<"Please choose contact index or for exit => exit or -1 :";
	while (decision != -1 && std::getline(std::cin,scan))
	{
		if(scan == "zero" || scan == "0" || scan == "first")
			decision = 0;
		else if(scan == "one" || scan == "1" || scan == "second")
			decision = 1;
		else if(scan == "two" || scan == "2" || scan == "third")
			decision = 2;
		else if(scan == "three" ||scan == "3" || scan == "fourth")
			decision = 3;
		else if(scan == "four" || scan == "4" || scan == "fifth")
			decision = 4;
		else if(scan == "five" || scan == "5" || scan == "sixth")
			decision = 5;
		else if(scan == "six" || scan == "6" || scan == "seventh")
			decision = 6;
		else if(scan == "seven" || scan == "7"|| scan == "eighth")
			decision = 7;
		else if(scan == "exit" || scan == "-1" )
			decision = -1;
		if (decision < this->index2 && decision != -1)
			this->contact[decision].function_print_contact();
		else if((decision <= -1 && decision >= 7) || decision >= this->index2)
			std::cout<<"Something is wrong try again :"<<std::endl;
	}
	std::cout<<"Command :";
}

int	number_switch(std::string input)
{
	int len = input.size();
	
	std::string add;
	std::string search;
	std::string exit;

	add		= "ADD";
	search	= "SEARCH";
	exit	= "EXIT";
	
	for (int i = 0; i < len; i++)
		if (isalpha(input[i]))
			input[i] = toupper(input[i]);
	
	if (input == add)
		return 1;
	else if (input == search)
		return 2;
	else if (input == exit)
		return 3;
	return 0;
}

int main()
{
	int flag = 0;
	int map;
	std::string reader;
	Phonebook start;
	
	std::cout<<"Welcome Phonebook software"<<std::endl;
	std::cout<<"You can choose Add, Search, Exit"<<std::endl;
	std::cout<<"Command :";
	while(flag != 1 && std::getline(std::cin,reader))
	{
		map = number_switch(reader);
		switch (map)
		{
		case 1:
			std::cout<<"Creating New Contact"<<std::endl;
			start.add_contact();
			break;
		case 2:
			std::cout<<"Searching Contact"<<std::endl;
			start.print_contact();
			start.search_contact();
			break;
		case 3:
			std::cout<<"System closed"<<std::endl;
			flag = 1;
			break;
		default:
			std::cout<<"You can choose Add, Search, Exit"<<std::endl;
			std::cout<<"Command :";
			break;
		}
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:23:49 by bderya            #+#    #+#             */
/*   Updated: 2023/01/04 14:27:48 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test1.hpp"
#include "Contact.hpp"
#include "PhoneBook.hpp"


Contact::Contact(std::string s_name, std::string s_surname,std::string s_nickname,std::string s_phonenumber,std::string s_darksecret)
	:name(s_name), surname(s_surname), nick_name(s_nickname),phonenumber(s_phonenumber),darkSecret(s_darksecret) 
{
}

Contact::~Contact()
{}

PhoneBook::PhoneBook()
{}

PhoneBook::~PhoneBook()
{}



std::string Contact::get_name(std::string s_name)
{
	this->name = s_name;
	return(this->name);
}

void function_add()
{
	PhoneBook save;
	std::string str[5];
	
	std::cout<<"Name :";
	getline(std::cin,str[0]);
	
	std::cout<<"Surname :";
	getline(std::cin,str[1]);

	std::cout<<"Nickname :";
	getline(std::cin,str[2]);

	std::cout<<"Phonenumber :";
	getline(std::cin,str[3]);
	
	std::cout<<"Darksecret :";
	getline(std::cin,str[4]);

	
}

int main()
{
	int flag = 0;
	int map;
	std::string reader;
	
	
	std::cout<<"Welcome Phonebook software"<<std::endl;
	
	while(flag != 1)
	{
		std::cout<<"Command :";
		getline(std::cin,reader);
		map = number_switch(reader);
		switch (map)
		{
		case 1:
			std::cout<<"Creating New Contact"<<std::endl;
			function_add();
			break;
		case 2:
			std::cout<<"Searching Contact"<<std::endl;
			break;
		case 3:
			std::cout<<"System closed"<<std::endl;
			flag = 1;
			break;
		default:
			std::cout<<"You can choose Add, Search, Exit"<<std::endl;
			break;
		}
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:23:49 by bderya            #+#    #+#             */
/*   Updated: 2023/01/03 16:06:08 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test1.hpp"
#include "Contact.hpp"

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

void function_add()
{
	Contact add;
	std::string str;
	
	
	std::cout<<"Name :";
	getline(std::cin,str);
	add.set_name(str);
	
	std::cout<<"Surname :";
	getline(std::cin,str);
	add.set_surname(str);
	
	std::cout<<"Nickname :";
	getline(std::cin,str);
	add.set_nickname(str);

	std::cout<<"Phonenumber :";
	getline(std::cin,str);
	add.set_phonenumber(str);
	
	std::cout<<"Darksecret :";
	getline(std::cin,str);
	add.set_darksecret(str);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:16:49 by bderya            #+#    #+#             */
/*   Updated: 2023/02/01 19:16:52 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout<<"The memory address of the string variable :"<<&string<<std::endl;
	std::cout<<"The memory address held by stringPTR	  :"<<stringPTR<<std::endl;
	std::cout<<"The memory address held by stringREF	  :"<<&stringREF<<std::endl;

	std::cout<<std::endl;

	std::cout<<"The value of the string variable  :"<<string<<std::endl;
	std::cout<<"The value pointed to by stringPTR :"<<*stringPTR<<std::endl;
	std::cout<<"The value pointed to by stringREF :"<<stringREF<<std::endl;

	return (0);
}
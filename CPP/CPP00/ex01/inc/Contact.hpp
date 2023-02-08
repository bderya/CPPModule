/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 08:21:08 by bderya            #+#    #+#             */
/*   Updated: 2023/01/07 18:10:00 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_H_
#define _CONTACT_H_

#include <string>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstdlib>

class Contact
{
	private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string phonenumber;
		std::string darksecret;
		std::string p_agenda[5];

	public:
		Contact(void);
		~Contact();
		void function_add(void);
		void function_print(int number);
		void function_print_contact(void);
};

#endif
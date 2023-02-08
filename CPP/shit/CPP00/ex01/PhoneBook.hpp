#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
#include "Contact.hpp"


class Phonebook
{
	private:
		Contact contact[8];
		int index;
		int index2;
		int flag;

	public:
		Phonebook();
		~Phonebook();

		void add_contact(void);
		void print_contact(void);
		void search_contact(void);
};



#endif
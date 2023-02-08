#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

#include "test1.hpp" 
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int index;
	
	public:
		PhoneBook();
		~PhoneBook();

		// void *set_save(std::string* s_contact){contact[index] = *s_contact;
		// std::cout<<contact[0]<<std::endl;}
		void add_new_contact(void);
};

#endif
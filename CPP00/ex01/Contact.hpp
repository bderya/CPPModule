#ifndef _CONTACT_H_
#define _CONTACT_H_

#include "test1.hpp"

class Contact
{
	private:
		std::string name;
		std::string surname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkSecret;
	
	public:
		Contact();
		
		void set_name(std::string s_name){name = s_name;}
		void set_surname(std::string s_surname){surname = s_surname;}
		void set_nickname(std::string s_nickname){nickname = s_nickname;}
		void set_phonenumber(std::string s_phonenumber){phonenumber = s_phonenumber;}
		void set_darksecret(std::string s_darksecret){darkSecret = s_darksecret;}
		
		~Contact();
		
		// void set_save(){}
		void set_print()
		{
			std::cout<<name<<std::endl<<surname<<std::endl<<nickname<<std::endl;
		}

};

#endif
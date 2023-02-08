#ifndef _CONTACT_H_
#define _CONTACT_H_

#include "test1.hpp"

class Contact
{
	private:
		std::string name;
		std::string surname;
		std::string	nick_name;
		std::string	phonenumber;
		std::string	darkSecret;

	public:
		Contact(std::string s_name, std::string s_surname,std::string s_nickname,std::string s_phonenumber,std::string s_darksecret);

		Contact(const Contact &source);
		//Contact(void);
		~Contact();
	
		void set_name(std::string s_name){name = s_name;}
		void set_surname(std::string s_surname){surname = s_surname;}
		void set_nickname(std::string s_nickname){nick_name = s_nickname;}
		void set_phonenumber(std::string s_phonenumber){phonenumber = s_phonenumber;}
		void set_darksecret(std::string s_darksecret){darkSecret = s_darksecret;}
		
		std::string get_name(std::string s_name);
		std::string get_surname();
		std::string get_phonenumber();
		std::string nickname();
		std::string get_darkSecret();
		
		void set_print()
		{
			std::cout<<name<<std::endl<<surname<<std::endl<<nickname<<std::endl;
		}

};

#endif
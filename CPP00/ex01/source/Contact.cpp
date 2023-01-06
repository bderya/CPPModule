#include "../inc/Contact.hpp"

Contact::Contact(){}
Contact::~Contact(){}

void Contact::function_add()
{
	int flag = 0;
	
	while(flag != 1)
	{
		switch (flag)
		{
			case 0:
				std::cout<<"Name :";
				std::getline(std::cin,this->name);
	
				std::cout<<"Surname :";
				std::getline(std::cin,this->surname);

				std::cout<<"Nickname :";
				std::getline(std::cin,this->nickname);

				std::cout<<"Phonenumber :";
				std::getline(std::cin,this->phonenumber);
	
				std::cout<<"Darksecret :";
				std::getline(std::cin,this->darksecret);
				
				if(this->name.size() != 0 && this->surname.size() != 0 &&
					this->nickname.size() != 0 && this->phonenumber.size() != 0 && this->darksecret.size() != 0)
				{
					std::cout<<"New contact adding..."<<std::endl;
					this->p_agenda[0] = this->name;
					this->p_agenda[1] = this->surname;
					this->p_agenda[2] = this->nickname;
					this->p_agenda[3] = this->phonenumber;
					this->p_agenda[4] = this->darksecret;
					flag = 1;
					break;
				}
			default:
				std::cout<<"Please fill up"<<std::endl;
				break;
		}	
	}
	std::cout<<"Command :";
}

void Contact::function_print_contact(void)
{
	
	std::cout<<"Name		:"<<p_agenda[0]<<std::endl;
	std::cout<<"Surname		:"<<p_agenda[1]<<std::endl;
	std::cout<<"Nickname	:"<<p_agenda[2]<<std::endl;
	std::cout<<"Phonenumber	:"<<p_agenda[3]<<std::endl;
	std::cout<<"Darksecret	:"<<p_agenda[4]<<std::endl;

	std::cout<<"Please choose contact or for exit => exit or -1 :";
}

void Contact::function_print(int number)
{
	char name[11];
	if(number == 0)
	{
		std::cout<<"|"<<std::setw(10)<<"Index";
		std::cout<<"|"<<std::setw(10)<<"Name";
		std::cout<<"|"<<std::setw(10)<<"Surname";
		std::cout<<"|"<<std::setw(10)<<"Nickname";
		std::cout<<"|"<<std::endl;
	}
	std::cout<<"|"<<std::setw(10)<<std::to_string(number);
	for(int i = 0; i < 3; i++)
	{
		std::cout<<"|"<<std::setw(10);
		if(p_agenda[i].size() > 10)
		{
			for(int j = 0; j < 9; j++)
				name[j] = p_agenda[i][j];
			name[9] = '.';
			name[10] = '\0';
			std::cout<<name;
		}
		else
			std::cout<<p_agenda[i];
	}
	std::cout<<"|"<<std::endl;
}

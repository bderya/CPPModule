#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string human)
{
	this->name = human;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(const Weapon& newWeapon)
{
	this->gun = &newWeapon;
	this->flag = 1;
}

void HumanB::attack()
{
	if (this->flag == 1)
		std::cout<<name<<" attacks with hand"<<std::endl;
	else
		std::cout<<name<<" attacks with their "<<gun->getType()<<std::endl;
}
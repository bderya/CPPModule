#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string human)
{
	this->name = human;
}

HumanB::~HumanB(){}


void HumanB::setWeapon(Weapon newWeapon)
{
	this->gun = newWeapon;
}

// Weapon	HumanB::getWeapon() const
// {
// 	return (this->gun);
// }

void HumanB::attack()
{
	std::cout<<name<<" attacks with their "<<gun.getType()<<std::endl;
}
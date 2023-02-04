#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string human, const Weapon& gun2)
{
	this->name = human;
	this->gun = &gun2;

}

HumanA::~HumanA(){}


void HumanA::attack()
{
	std::cout<<name<<" attacks with their "<<gun->getType()<<std::endl;
}
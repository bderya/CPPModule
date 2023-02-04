#include "../inc/Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const
{
	return(type);
}

void Weapon::setType(const std::string &newType)
{
	this->type = newType;
}

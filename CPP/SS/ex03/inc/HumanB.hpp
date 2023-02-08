#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	
	private:
		Weapon gun;
		std::string name;

	public:
		HumanB(std::string human);
		~HumanB();
		void setWeapon(Weapon newWeapon);
		//Weapon getWeapon() const;
		void attack();
		

};

#endif
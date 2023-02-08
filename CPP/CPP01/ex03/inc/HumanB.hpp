#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {
	
	private:
		const Weapon* gun;
		std::string name;
		int flag;

	public:
		HumanB(std::string human);
		~HumanB();
		void setWeapon(const Weapon& newWeapon);
		//Weapon getWeapon() const;
		void attack();
		

};

#endif
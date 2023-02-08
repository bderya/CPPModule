#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

	private:
		const Weapon* gun;
		std::string name;

	public:
		HumanA(std::string human, const Weapon& gun2);
		~HumanA();
		void attack();
		
		
};

#endif
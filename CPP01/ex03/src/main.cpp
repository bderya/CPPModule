/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:32:39 by bderya            #+#    #+#             */
/*   Updated: 2023/02/04 19:42:17 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"
#include "../inc/Weapon.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		
		jim.setWeapon(club);
		//Weapon smth;

		//smth = jim.getWeapon();
		//std::cout<<smth.getType()<<std::endl;
		jim.attack();
		club.setType("some other type of club");
		//smth = jim.getWeapon();
		//std::cout<<smth.getType()<<std::endl;
		std::cout<<club.getType()<<std::endl;
		jim.attack();
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:20:09 by bderya            #+#    #+#             */
/*   Updated: 2023/02/01 18:16:24 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}

Zombie* newZombie(std::string name)
{
	return new Zombie(name);
}

std::string Zombie::getName()
{
	return name;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
	/*Problem burada bunu donguye al*/
	Zombie *horde = new Zombie[N];
	
	for(int i = 0; i < N; i++)
	{
		horde[i].setName(name + std::to_string(i));
	}
	return (horde);
}
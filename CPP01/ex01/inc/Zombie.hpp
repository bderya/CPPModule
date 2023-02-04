/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:06:33 by bderya            #+#    #+#             */
/*   Updated: 2023/02/01 18:03:30 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iomanip>
#include <iostream>
#include <string>


class Zombie
{
	private:
		std::string name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		std::string getName();
		void setName(std::string name);

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif
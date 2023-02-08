/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:28:44 by bderya            #+#    #+#             */
/*   Updated: 2023/02/01 16:29:03 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
	//std::string nameZombie;
	Zombie* nZombie = newZombie("Firster");
	nZombie->announce();
	delete nZombie;
	randomChump("Francesco");
	return (0);
}
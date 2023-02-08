/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:14:10 by bderya            #+#    #+#             */
/*   Updated: 2023/02/01 18:16:27 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name) : name(name)
{
	std::cout<<name<<" zombie created"<<std::endl;
}

Zombie::~Zombie()
{
	std::cout<<name<<" zombie Destroyed"<<std::endl;
}

void Zombie::announce()
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
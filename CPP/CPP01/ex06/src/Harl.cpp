/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:39:17 by bderya            #+#    #+#             */
/*   Updated: 2023/02/07 18:25:55 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void)
{
	std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout<<"I really do!"<<std::endl;
}

void Harl::info(void)
{
	std::cout<<"I cannot believe adding extra bacon costs more money. ";
	std::cout<<"You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<<std::endl;
}

void Harl::warning(void)
{
	std::cout<<"I think I deserve to have some extra bacon for free. ";
	std::cout<<"I’ve been coming for years whereas you started working here since last month."<<std::endl;
}

void Harl::error(void)
{
	std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}

void Harl::crazy(void)
{
	std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	void (Harl::* ptfptr[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::crazy};
	std::string dic[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "OTHER"};

	while(i < 4)
	{
		if (level == dic[i])
		{
			(this->*ptfptr[i])();
			return ;
		}
		i++;
	}
	(this->*ptfptr[i])();

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 08:21:08 by bderya            #+#    #+#             */
/*   Updated: 2023/01/03 09:21:58 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	if(argc == 1)
		std::cout<<"* LOUD AND UNBERABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			int lengt = sizeof(argv[i]);
			char write[lengt];
	
			for(int j = 0; j < lengt; j++)
				write[j] = toupper(argv[i][j]);
				
			std::cout<<write<<" ";
		}
	}
	return (0);
}
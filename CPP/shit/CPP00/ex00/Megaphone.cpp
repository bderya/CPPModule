/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bderya <bderya@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 08:21:08 by bderya            #+#    #+#             */
/*   Updated: 2023/01/03 10:16:47 by bderya           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	int lengt;
	if(argc == 1)
		std::cout<<"* LOUD AND UNBERABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			lengt = strlen(argv[i]);
			
			for(int j = 0; j < lengt; j++)
			{
				if (isalpha(argv[i][j]))
					std::cout<<(char)toupper(argv[i][j]);
				else
					std::cout<<(char)argv[i][j];
			}
			std::cout<<" ";
		}
		std::cout<<std::endl;
	}
	
	return (0);
}
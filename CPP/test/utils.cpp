#include "test1.hpp"

int	number_switch(std::string input)
{
	int len = input.size();
	
	std::string add;
	std::string search;
	std::string exit;

	add		= "ADD";
	search	= "SEARCH";
	exit	= "EXIT";
	
	for (int i = 0; i < len; i++)
		if (isalpha(input[i]))
			input[i] = toupper(input[i]);
	
	if (input == add)
		return 1;
	else if (input == search)
		return 2;
	else if (input == exit)
		return 3;
	return 0;
}

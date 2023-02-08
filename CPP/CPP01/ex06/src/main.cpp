#include "../inc/Harl.hpp"




int main(int argc, char *argv[])
{
	Harl harl;
	
	if (argc == 1)
	{
		std::cout<<"Please follow instruction"<<std::endl;
		std::cout<<argv[0]<<" [Harl problme .. .. .. .. ] ...";
	}
	int i = 1;
	while(i < argc)
	{
		harl.complain(argv[i]);
		i++;
	}
	return (0);
}
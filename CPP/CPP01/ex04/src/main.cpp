#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout<<"	Please follow instruction	"<<std::endl;
		std::cout<<argv[0]<<" filename(text etc.) s1(Search) s2(Change)"<<std::endl;
		return (1);
	}
	else
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		std::string str;
		std::string tmp_str;

		std::ifstream file_in(filename.std::string::c_str());
		if(file_in.std::ios::good())
		{
			std::ofstream file_out((filename + ".replace").std::string::c_str());
			std::size_t del = s1.std::string::length();
			
			while(std::getline(file_in,str))
			{
				std::size_t index = str.std::string::length();
				std::size_t finder;
				while((finder = str.std::string::find(s1)) <= index)
				{
					tmp_str = str.std::string::erase(finder, del);
					tmp_str = str.std::string::insert(finder, s2);			
				}
				if(tmp_str.std::string::length() == 0)
					file_out<<str<<std::endl;
				else
					file_out<<tmp_str<<std::endl;
			}
			file_out.close();
		}
		else
		{
			std::cout<<"Something is wrong"<<std::endl;
		}
		file_in.close();
	}
	std::cout<<"Program TERMINATED"<<std::endl;
	return (0);
}
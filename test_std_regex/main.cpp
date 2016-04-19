#include <iostream>
#include <regex>

void main()
{
	std::regex reg(".*/(0|)2/29$");

	std::cout << std::regex_replace("2015/02/29", std::regex("/(0|)2/29"), "/02/28") << std::endl;

	if (std::regex_match("20/02/29", reg))
	{
		std::cout << "Match\n";
	}
	else
	{
		std::cout << "Miss Match\n";
	}
}
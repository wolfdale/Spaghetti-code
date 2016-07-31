#include<iostream>
#include<string>

int main(int argc, char** argv)
{

	std::string x = "string";
	char s[] = "String";
	//Prints '\0' in c style char array	
	for (char c : s)
	{
		std::cout << "character: " << c << std::endl;
	}
	std::cout << "STL String Container " << std::endl;
	
	for (char c : x)
	{
		std::cout << "character: " << c << std::endl;
	}







	return 0;
}















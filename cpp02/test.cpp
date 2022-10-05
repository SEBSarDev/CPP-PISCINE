#include <iostream>

int main()
{
	int i = 2147483647;
	float nbr = 1234.4321f;
	long long bin;
	int nb = 10;

	std::string r;
	std::cout << "avant : " << nb << std::endl;
	nb <<= 8;
	std::cout << "apres : " << nb << std::endl;
}

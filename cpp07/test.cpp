#include <iostream>

int main(void)
{
	int *a = new int();
	int *b = new int[0];
	int *c = new int[28];
	std::cout << *a << std::endl;
	for (int i = 0; i < 28; i++)
		std::cout << c[i] << std::endl;
	delete a;
	delete [] b;
	delete [] c;
}

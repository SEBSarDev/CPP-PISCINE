#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen my_instance;

	if (argc != 2)
	{
		std::cout << "Usage : ./KarenFilter Complainment";
		return (1);
	}
	my_instance.complain(argv[1]);
	return (0);
}

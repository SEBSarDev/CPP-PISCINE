# include <iostream>
# include <sstream>
# include <limits>
# include <iomanip>
# include <cstring>

std::string test(char *str)
{
	std::string test;

	test = str;
	return (test);
}

int main(int argc, char **argv)
{
	double nb;
	test(argv[0]);
	std::cout << std::setprecision(10) <<std::fixed << atof(argv[1]) << std::endl;
	std::cout << std::setprecision(10) <<std::fixed << atof("a") << std::endl;
	std::cout << std::setprecision(10) <<std::fixed << atof("yolo") << std::endl;
	for (int i = 1; i < argc; i++)
	{
	std::istringstream s(argv[i]);
	if (!(s >> nb))
	{
		if (std::strlen(argv[i]) > 1)
		{
			std::cout << "ERROR : usage : ./conv [char] || [int] || [float] || [double]" << std::endl;
			return (-1);
		}
		nb = static_cast<double>(argv[i][0]);
	}
	std::cout << std::setprecision(10) <<std::fixed << nb << std::endl;
	}
	std::cout << std::numeric_limits<double>::min() << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;
	std::cout << 1e83 << std::endl;
	std::cout << std::numeric_limits<double>::max() << std::endl;
}

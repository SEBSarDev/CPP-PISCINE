#include "Sed.hpp"
//to read in file -> std::ifstream file1("file_name");
//to write in file -> std::ofstream file2("file_name");
//ne pas oublier de file.close();

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "USAGE : ./replace filename string_to_replace string_to_replace_with" << std::endl;
		return (1);
	}
	
	char file[9] = ".replace";
	char buff[std::strlen(argv[1]) + 9];
	std::memset(buff, '\0', std::strlen(argv[1]) + 9);
	std::strcat(buff, argv[1]);
	std::strcat(buff, file);
	Sed mySed(argv, argv[1], buff);
	mySed.ft_replace();
}

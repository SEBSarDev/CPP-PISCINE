#include "Karen.hpp"

Karen::Karen( void )
{
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void Karen::complain(std::string level)
{
	int i;
	int nb_level;
	std::string possible[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	nb_level = -1;
	for (i = 0; i < 4; i++)
	{
		if (level == possible[i])
			nb_level = i;
	}
	switch (nb_level)
	{
		case 0:
			this->debug();
		case 1 :
			this->info();
		case 2 :
			this->warning();
		case 3 :
			this->error();
			break ;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-triple-pickle-special-kethup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

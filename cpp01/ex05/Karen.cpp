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

	std::string possibilities[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Karen::*wich_one[4])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	for (i = 0; i < 4; i++)
	{
		if (level == possibilities[i])
			(this->*wich_one[i])();
	}
}

void Karen::debug(void)
{
	std::cout << "DEBUG level :" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-triple-pickle-special-kethup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "INFO level :" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "WARNING level :" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "ERROR level :" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

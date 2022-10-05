#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "\33[30;32m" << "FragTrap" << "\x1b[0m" <<  " default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\33[30;32m" << "FragTrap" << "\x1b[0m" <<  " default constructor called (" << this->_name << ")"<< std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attack = 30;
	return;
}

FragTrap::FragTrap(FragTrap const &a)
{
	*this = a;
}

FragTrap &FragTrap::operator=(FragTrap const &a)
{
	_hitpoints = a.getHitpoints();
	_energy = a.getEnergy();
	_attack = a.getAttack();
	_name = a.getName();
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "\33[30;32m" << "FragTrap" << "\x1b[0m" << " destructor called (" << this->_name << ")" << std::endl;
	return;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\33[30;32m" << "FragTrap " << "\x1b[0m";
	std::cout << "ヘ( ^o^)ノ＼(^_^ )" << std::endl;
	return ;
}

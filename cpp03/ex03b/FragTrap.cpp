#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "\33[30;32m" << "FragTrap" << "\x1b[0m" <<  " default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attack = 30;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\33[30;32m" << "FragTrap" << "\x1b[0m" <<  " default constructor called "<< std::endl;
	this->_hitpoints = 100;
	this->_energy = 100;
	this->_attack = 30;
	return;
}

FragTrap::FragTrap(FragTrap const &a) : ClapTrap(a.getName())
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
	std::cout << "\33[30;32m" << "FragTrap" << "\x1b[0m" << " destructor called" << std::endl;
	return;
}

//int FragTrap::getEnergyFrag(void) const
//{
//	return (this->_energy);
//}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\33[30;32m" << "FragTrap " << "\x1b[0m";
	std::cout << "ヘ( ^o^)ノ＼(^_^ )" << std::endl;
	return ;
}

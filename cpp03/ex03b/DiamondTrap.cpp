#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ScavTrap(), FragTrap() 
{
	std::cout << "\33[30;31m" << "DiamondTrap " << "\x1b[0m";
	std::cout << "default constructor called" << std::endl;
	this->_energy = this->ScavTrap::_energy;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap()
{
	std::cout << "\33[30;31m" << "DiamondTrap " << "\x1b[0m";
	std::cout << "default constructor called" << std::endl;
	this->_name = name;
	this->_energy = this->ScavTrap::_energy;
	ClapTrap::_name = name + "_clap_name";
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &a) : ScavTrap(a.getName()), FragTrap(a.getName())
{
	std::cout << "\33[30;31m" << "DiamondTrap " << "\x1b[0m";
	std::cout << "default constructor called" << std::endl;
	this->_name = a.getName();
	this->_energy = a.ScavTrap::_energy;
	ClapTrap::_name = a.getName() + "_clap_name";
	return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &a)
{
	_name = a.getPrivateName();
	ClapTrap::_name = a.getName();
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\33[30;31m" << "DiamondTrap " << "\x1b[0m";
	std::cout << "default destructor called" << std::endl;
	return ;
}

std::string DiamondTrap::getPrivateName(void) const
{
	std::cout << "\33[30;31m" << "DiamondTrap " << "\x1b[0m";
	return (this->_name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "\33[30;31m" << "DiamondTrap " << "\x1b[0m";
	std::cout << "Diamond _name : " << this->_name << ", ClapTrap _name : " << this->ClapTrap::getName() << std::endl;
	return ;
}

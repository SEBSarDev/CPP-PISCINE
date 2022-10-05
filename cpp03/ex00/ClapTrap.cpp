#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
		return;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy = 10;
	this->_attack = 0;
	std::cout << "ClapTrap default constructor called : " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &a)
{
	*this = a;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &a)
{
	std::cout << "ClapTrap assignation operateur called" << std::endl;
	_name = a.getName();
	_hitpoints = a.getHitpoints();
	_energy = a.getEnergy();
	_attack = a.getAttack();
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called : " << this->_name << " deleted" << std::endl;
	return ;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getEnergy(void) const
{
	return (this->_energy);
}

int ClapTrap::getHitpoints(void) const
{
	return (this->_hitpoints);
}

int ClapTrap::getAttack(void) const
{
	return (this->_attack);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_energy <= 0)
	{
		std::cout << this->_name << " hasn't enought energy to attack" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
	this->_energy--;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " loses " << amount << " points --> ";
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
			std::cout << this->_name << " is died." << std::endl;
	else
			std::cout << this->_name << "'s hitpoints : " << this->_hitpoints << std::endl;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name << " drunk potion and restaured " << amount << " hitpoints! --> ";
	this->_hitpoints += amount;
	std::cout << this->_name << "'s hitpoints : " << this->_hitpoints << std::endl;
}

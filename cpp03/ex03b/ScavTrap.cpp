#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "\33[30;34m" << "ScavTrap" << "\x1b[0m" <<  " default constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack = 20;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "\33[30;34m" << "ScavTrap" << "\x1b[0m" <<  " default constructor called"<< std::endl;
	this->_hitpoints = 100;
	this->_energy = 50;
	this->_attack = 20;
	return;
}

ScavTrap::ScavTrap(ScavTrap const &a) : ClapTrap(a.getName())
{
	*this = a;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &a)
{
	_hitpoints = a.getHitpoints();
	_energy = a.getEnergy();
	_attack = a.getAttack();
	_name = a.getName();
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\33[30;34m" << "ScavTrap" << "\x1b[0m" << " destructor called" << std::endl;
	return;
}

int ScavTrap::getEnergy(void) const
{
	return (this->_energy);
}

void ScavTrap::guardGate(void)
{
	std::cout << "\33[30;34m" << "ScavTrap " << "\x1b[0m";
	std::cout << "has enterred in Gate Keeper mode" << std::endl;
	return ;
}

void ScavTrap::attack(std::string const &target)
{
	if (this->_energy <= 0)
	{
		std::cout << this->_name << " has not enought energy to attack" << std::endl;
		return ;
	}
	std::cout << "\33[30;34m" << "ScavTrap " << "\x1b[0m" << this->_name << " attack " << target << ", causing " << this->_attack << " points of damage !" << std::endl;
	this->_energy--;
	return ;
}

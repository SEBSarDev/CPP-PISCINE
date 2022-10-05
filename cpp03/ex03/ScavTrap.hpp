#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public :
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &a);
	ScavTrap &operator=(ScavTrap const &a);
	~ScavTrap(void);
	void attack(std::string const & target);
	void guardGate(void);
	int getEnergy(void) const;

	protected :
	int _energy;
};

#endif

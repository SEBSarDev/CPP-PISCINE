#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public :
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &a);
	FragTrap &operator=(FragTrap const &a);
	~FragTrap(void);
	void highFivesGuys(void);
};

#endif

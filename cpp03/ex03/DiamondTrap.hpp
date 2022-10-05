#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public :
		DiamondTrap(void);
		DiamondTrap(std::string);
		DiamondTrap(DiamondTrap const &a);
		DiamondTrap &operator=(DiamondTrap const &a);
		~DiamondTrap(void);
		void whoAmI(void);
		std::string getPrivateName(void) const;

	private :
		std::string _name;
};

#endif

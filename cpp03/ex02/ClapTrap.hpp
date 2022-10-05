#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &a);
	ClapTrap &operator=(const ClapTrap &a);
	~ClapTrap(void);

	std::string getName(void) const;
	int getHitpoints(void) const;
	int getAttack(void) const;
	int getEnergy(void) const;

	void attack(std::string const &target);
	void takeDamage(unsigned int mount);
	void beRepaired(unsigned int amount);
	
	protected:
	std::string _name;
	int _hitpoints;
	int _energy;
	int _attack;
};

#endif

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <string>

class Weapon
{
	public :
	Weapon(const std::string name);
	~Weapon(void);
	const std::string getType(void) const;
	void setType(const std::string name);

	private :
	std::string _weapon_type;
};

#endif

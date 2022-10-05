#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string);
		~HumanB(void);
		void attack(void);
		void setWeapon(Weapon &weap);

	private :
		Weapon *_actualWeap;
		std::string _name;
};

#endif

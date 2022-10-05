#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weap);
		~HumanA(void);
		void attack(void);

	private :
		Weapon &_actualWeap;
		std::string _name;
};

#endif

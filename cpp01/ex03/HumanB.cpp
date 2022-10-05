#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

//il faut passer une reference, sinon on passe une copie de la Weapon et du coup les changement ne seront pas pris en compte sur la Weapon set precedement mais sur sa copie, ce qui ne sert a rien.
void HumanB::setWeapon(Weapon &weap)
{
	this->_actualWeap = &weap;
	return ;
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his weapon " << this->_actualWeap->getType() << std::endl;
	return ;
}

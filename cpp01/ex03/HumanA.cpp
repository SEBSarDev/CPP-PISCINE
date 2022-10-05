#include "HumanA.hpp"

/* ici on est oblige d'utiliser l'initalizer list car l'objet est deja cree quand on rentre dans le constructeur. 
* Or comme a weapon est une reference, elle ne peut pas etre non-initialiser, il faut donc l'intialiser dans la liste au debut.
* on passe une reference pour initialiser directement la reference de la classe. 
* il faut que ce soit une reference car l'humainA ne peut pas etre sans arme,
* or une reference ne peut pas ne pas etre assignee, donc ca tombe bien.
*  enfin la reference permetra d'actualiser directeent chez l'humainA les changement qui ont ete fait sur la classe Weapon.
*/

HumanA::HumanA(std::string name, Weapon &weap) : _actualWeap(weap)
{
	this->_name = name;
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with his weapon " << this->_actualWeap.getType() << std::endl;
	return ;
}

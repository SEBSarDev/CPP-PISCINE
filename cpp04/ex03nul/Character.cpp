#include "Character.hpp"

Character::~Character(void)
{
	return ;
}

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	return ;
}

Character::Character(std::string theName)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	this->name = theName;
	return ;
}

AMateria *Character::getInventory(int i) const
{
	return (this->inventory[i]);
}

Character &Character::operator=(Character const &a)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = a.getInventory(i);
	name = a.getName();
	return (*this);
}

Character::Character(Character const &a)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = a.getInventory(i);
	this->name = a.getName();
	return ;
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

void Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while (this->inventory[i] != NULL)
		i++;
	if (i < 4)
		this->inventory[i] = m;
}

void Character::unequip(int i)
{
	this->inventory[i] = NULL;
	return ;
}

void Character::use(int i, ICharacter &target)
{
	this->inventory[i]->use(target);
}

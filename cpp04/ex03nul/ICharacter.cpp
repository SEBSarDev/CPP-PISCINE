#include "ICharacter.hpp"

ICharacter::~ICharacter(void)
{
	return ;
}

ICharacter::ICharacter(void)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	return ;
}

ICharacter::ICharacter(std::string theName)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	this->name = theName;
	return ;
}

AMateria ICharacter::getInventory(int i) const
{
	return (this->inventory[i]);
}

ICharacter &ICharacter::operator=(ICharacter const &a)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = a.getInventory(i);
	name = a.getName();
	return (*this);
}

ICharacter::ICharacter(ICharacter const &a)
{
	for (int i = 0; i < 4; i++)
		this->inventory[i] = a.getInventory(i);
	this->name = a.getName();
	return ;
}

std::string const &getName(void) const
{
	return (this->name);
}

void equip(AMateria *m)
{
	int i;

	i = 0;
	while (inventory[i] != NULL)
		i++;
	if (i < 4)
		inventory[i] = m;
}

void unequip(int idx)
{
	inventory[i] = NULL;
	return ;
}

void use(int dsx, ICharacter &target)
{
	inventory[i].use(target);
}

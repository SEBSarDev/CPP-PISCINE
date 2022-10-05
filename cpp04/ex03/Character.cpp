#include "Character.hpp"

Character::Character(void)
{
	this->_store = NULL;
	for (int i = 0; i < 4; i++)
			this->Materia[i] = NULL;
	return ;
}

Character::Character(std::string name)
{
	this->_name = name;
	this->_store = NULL;
	for (int i = 0; i < 4; i++)
			this->Materia[i] = NULL;
	return ;
}

Character::Character(const Character &a)
{
	this->_name = a.getName();
	for (int i = 0; i < 4; i++)
	{
		if (a.getMateria(i) != NULL)
			this->Materia[i] = a.getMateria(i)->clone();
		if (a.getStore() != NULL)
			this->_store = a.getStore()->clone();
	}
	return ;
}

Character &Character::operator=(const Character &a)
{
	this->_name = a.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i])
			delete this->Materia[i];
		this->Materia[i] = NULL;	
	}
	for (int i = 0; i < 4; i++)
		this->Materia[i] = a.getMateria(i)->clone();
	if (this->_store)
		delete this->_store;
	this->_store = a.getStore();
	return (*this);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i])
			delete Materia[i];
		this->Materia[i] = NULL;	
	}
	if (this->_store)
		delete this->_store;
	return ;
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	
	if (!m)
			return ;
	while (i < 4 && this->Materia[i])
			i++;
	if (i >= 4)
	{
			delete m;
			return ;
	}
	this->Materia[i] = m->clone();
	delete m;
}

void Character::unequip(int idx)
{
	if (this->Materia[idx] == NULL)
		return ;
	stock(idx);
	if (idx >= 0 && idx < 4)
		this->Materia[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->Materia[idx])
			this->Materia[idx]->use(target);
	delete this->Materia[idx];
	this->Materia[idx] = NULL;
}

AMateria *Character::getStore(void) const
{
	if (!this->_store)
		return (NULL);
	return (this->_store);
}

AMateria *Character::getMateria(int i) const
{
	if (i < 0 || i >= 4 || !this->Materia[i])
		return (NULL);
	return (this->Materia[i]);
}

void Character::stock(int idx)
{
	if (this->_store != NULL)
			delete (this->_store);
	this->_store = this->Materia[idx]->clone();
	delete this->Materia[idx];
}

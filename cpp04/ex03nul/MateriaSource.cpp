#include "MateriaSource.hpp"

MateriaSource::~MateriaSource()
{
	this->i = 0;
	return ;
}

MateriaSource::MateriaSource(void)
{
	this->i = 0;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &a)
{
	*this = a;
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &a)
{
	this->i = a.getIndex();
	for (int j = 0 ; j < this->i ; j++)
			this->store[j] = a.getStore(this->i).clone();
	return (*this);
}

AMateria MateriaSource::getStore(int i) const
{
	return (this->store[i]);
}

int MateriaSource::getIndex(void) const
{
	return (this->i);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->i < 4)
		store[this->i] = &m;
	this->i++;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	if (this->i < 4)
		this->store[this->i];
	return (temp);
}

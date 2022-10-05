#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->Materia[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] != NULL)
			delete this->Materia[i];
	}
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &a)
{
	for (int i = 0; i < 4; i++)
	{
		if (a.getMateria(i) != NULL)
			this->Materia[i] = a.getMateria(i)->clone();
	}
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &a)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->Materia[i] != NULL)
			delete this->Materia[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (a.getMateria(i) != NULL)
			this->Materia[i] = a.getMateria(i)->clone();
	}
	return (*this);
}

AMateria *MateriaSource::getMateria(int i) const
{
	if (i < 0 || i >= 4 || !this->Materia[i])
		return (NULL);
	return (this->Materia[i]);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while (i < 4 && this->Materia[i] != NULL)
		i++;
	if (this->Materia[i] == NULL)
		this->Materia[i] = m->clone();
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type) 
{
	int i = 0;

	while (i < 4)
	{
		if (this->Materia[i] != NULL && this->Materia[i]->getType() == type)
			break ;
		i++;
	}
	if (i >= 4)
			return (NULL);
	return (this->Materia[i]->clone());
}

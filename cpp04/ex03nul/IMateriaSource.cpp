#include "IMateriaSource.hpp"

virtual ~IMateriaSource()
{
	return ;
}

IMateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		store[i] = NULL;
	return ;
}

IMateriaSource(IMateriaSource const &a)
{
	for (int i = 0; i < 4; i++)
		store[i] = NULL;
	*this = a;
	return ;
}

/*IMateriaSource &IMateria::operator=(IMateriaSource const &a)
{
	return (*this);
}
*/
void learnMateria(AMateria *m)
{
	int i;

	i = 0;
	while(this->store != NULL)
		i++;
	if (i < 4)
		store[i] = m;
}

AMateria *createMateria(std::string const &type)
{
	int i; 

	i = 0;
	while (i < 4 && store[i] != NULL &&  store[i]->getName() != type)
		i++;
	if (i >= 4 || store[i] == NULL)
		return (0);
	AMateria *temp = store[i];
	return (temp);
}

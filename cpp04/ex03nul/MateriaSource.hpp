#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		virtual ~MateriaSource();
		MateriaSource(void);
		MateriaSource(MateriaSource const &a);
//		MateriaSource &MateriaSource::operator=(MateriaSource const &a);

		virtual void learnMateria(AMateria *m);
		virtual AMateria *createMateria(std::string const &type);
		AMateria getStore(int i) const;	
		int getIndex(void) const;
	private:
		AMateria *store;
		int i;
};

#endif

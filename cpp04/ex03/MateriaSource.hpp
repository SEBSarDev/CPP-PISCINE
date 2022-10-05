#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource(void);
		MateriaSource(const MateriaSource &a);
		MateriaSource &operator=(const MateriaSource &a);
		virtual ~MateriaSource(void);
		virtual void learnMateria(AMateria*);
		AMateria *getMateria(int i) const;
		virtual AMateria* createMateria(std::string const & type);
	
	private :
		AMateria *Materia[4];
};

#endif

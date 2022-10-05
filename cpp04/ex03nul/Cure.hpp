#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public :

	Cure(void);
	Cure(Cure const &a);
	Cure &operator=(Cure const &a);
	~Cure(void);
	virtual void use(ICharacter &target);
	virtual Cure *clone(void) const;
};

#endif


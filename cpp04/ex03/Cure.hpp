#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public : 
	Cure(void);
	~Cure(void);
	Cure &operator=(const Cure &a);
	Cure(const Cure &a);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif

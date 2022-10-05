#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public :

	Ice(void);
	Ice(Ice const &a);
	Ice &operator=(Ice const &a);
	~Ice(void);
	virtual void use(ICharacter &target);
	virtual Ice *clone(void) const;
};

#endif


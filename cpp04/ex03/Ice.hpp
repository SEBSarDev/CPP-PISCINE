#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public :
	Ice(void);
	~Ice(void);
	Ice &operator=(const Ice &a);
	Ice(const Ice &a);
	virtual AMateria *clone() const;
	virtual void use(ICharacter &target);
};

#endif

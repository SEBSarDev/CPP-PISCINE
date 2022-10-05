#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;
class Character;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		AMateria(const AMateria &a);
		AMateria &operator=(const AMateria &a);
		virtual ~AMateria(void);
		AMateria(std::string const & type);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif

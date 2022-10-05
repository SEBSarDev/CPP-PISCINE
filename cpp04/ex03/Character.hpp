#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
	Character(void);
	Character(std::string name);
	Character (const Character &a);
	Character &operator=(const Character &a);
	~Character(void);

	virtual std::string const & getName()const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
	AMateria *getMateria(int i) const;
	AMateria *getStore(void) const;
	void stock(int idx);

	private :
	AMateria *Materia[4];
	std::string _name;
	AMateria *_store;
};

#endif

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{
	public :
		virtual ~Character(void);
		Character(void);
		Character(std::string name);
		Character(Character const &a);
		Character &operator=(Character const &a);
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
		AMateria *getInventory(int i) const;	

	protected :
		AMateria *inventory[4];
		std::string name;
};

#endif

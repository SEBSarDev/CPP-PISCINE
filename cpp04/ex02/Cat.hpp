#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public :
		Cat(void);
		Cat(Cat const &a);
		Cat &operator=(Cat const &a);
		~Cat(void);
		void setIdeas(std::string str, int i);
		virtual void makeSound(void) const;
		Brain &getBrain(void) const;

	private :
		Brain *brain;
};

#endif

#ifndef BRAIN_HPP
#define BRAIN_HPP
# include <iostream>

class Brain
{
	public :
		Brain(void);
		~Brain(void);
		Brain(Brain const &a);
		Brain &operator=(Brain const &a);
		std::string getIdea(int i) const;
		void setBrainIdeas(std::string str, int i);

	private :
		std::string ideas[100];
};

#endif

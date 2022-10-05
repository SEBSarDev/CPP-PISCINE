#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include <iostream> // pour afficher et recuperer donnees
# include <string> // pour la class string
# include <iomanip> // par exemple remplir une ligne avec tel caractere ex std::setfill std::setw
# include "ClassContact.hpp"

class PhoneBook
{
	public :
	PhoneBook(void);
	~PhoneBook(void);
	bool add_new();
	void show_part(std::string str);
	void show_all(void);
	bool show_index(int index);

	private :
	Contact tab[8];
};

#endif

#ifndef CONTACT_CLASSE_HPP
# define CONTACT_CLASSE_HPP
# include <iostream>
# include <string>

class Contact
{
	public :
	Contact(void);
	~Contact(void);
	bool set_first_name(void);
	bool set_last_name(void);
	bool set_nickname(void);
	bool set_number(void);
	bool set_secret(void);
	void add_index(int i);
	int get_index(void);
	std::string get_first_name(void) const;
	std::string get_last_name(void) const;
	std::string get_nickname(void) const;
	std::string get_number(void) const;
	std::string get_secret(void) const;
	
	private :
	int _index;
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _number;
	std::string _secret;
};

#endif

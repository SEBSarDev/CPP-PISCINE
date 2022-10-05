/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhoneBook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:29:59 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:30:19 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void PhoneBook::show_part(std::string str)
{
	std::string str2;

	if (str.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << str << "|";
	}
	else
	{
		str2 = str.substr(0, 9);
		str2 += ".";
		std::cout << std::setw(10);
		std::cout << str2 << "|";
	}
}

void PhoneBook::show_all(void)
{
	int i;
	std::string str;

	i = 0;
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << "index" << "|";
	std::cout << std::setw(10);
	std::cout << "first name" << "|";
	std::cout << std::setw(10);
	std::cout << "last name" << "|";
	std::cout << std::setw(10);
	std::cout << "nickname" << "|";
	std :: cout << std::endl;
	while (i < 8 && this->tab[i].get_index() != -1)
	{
		std::cout << "|";
		std::cout << std::setw(10);
		std::cout << this->tab[i].get_index() + 1 << "|";
		str = this->tab[i].get_first_name();
		show_part(str);
		str = this->tab[i].get_last_name();
		show_part(str);
		str = this->tab[i].get_nickname();
		show_part(str);
		std :: cout << std::endl;
		i++;
	}
}

bool PhoneBook::show_index(int index)
{
	if (index <= 0 || index > 8)
	{
		std::cout << "This index does not exist" << std::endl;
		return (false);
	}
	else if (this->tab[index - 1].get_index() == -1)
	{
		std::cout << "index \"" << index << "\" is not set yet" << std::endl;
		return (false);
	}
	else
	{
		std:: cout << "first name : " << this->tab[index - 1].get_first_name() << std::endl;
		std:: cout << "last name : " << this->tab[index - 1].get_last_name() << std::endl;
		std:: cout << "nickname : " << this->tab[index - 1].get_nickname() << std::endl;
		std:: cout << "number : " << this->tab[index - 1].get_number() << std::endl;
		std:: cout << "secret : " << this->tab[index - 1].get_secret() << std::endl;
	}
	return (true);
}

bool PhoneBook::add_new(void)
{
	int i;

	i = 0;
	while (i < 8 && tab[i].get_index() != -1)
		i++;
	if (i >= 8)
	{
		std::cout << "--> ERROR : PhoneBook is already full" << std::endl;
		return (false);
	}
	tab[i].add_index(i);
	while (tab[i].set_first_name() == false)
		continue;
	while (tab[i].set_last_name() == false)
		continue;
	while (tab[i].set_nickname() == false)
		continue;
	while (tab[i].set_number() == false)
		continue;
	while (tab[i].set_secret() == false)
		continue;
	std::cout << "---> SUCCESS : new contact added" << std::endl << std::endl;
	return (true);
}

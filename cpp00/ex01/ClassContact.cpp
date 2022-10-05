/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:28:11 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:28:53 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact(void)
{
	this->_index = -1;	
	return;
}

Contact::~Contact(void)
{		
	return;
}

std::string Contact::get_first_name(void) const
{
	if (this->_first_name.length() != 0)
		return (this->_first_name);
	else
		return (NULL);
}
std::string Contact::get_last_name(void) const
{
	if (this->_last_name.length() != 0)
		return (this->_last_name);
	else
		return (NULL);
}
std::string Contact::get_nickname(void) const
{
	if (this->_nickname.length() != 0)
		return (this->_nickname);
	else
		return (NULL);
}
std::string Contact::get_number(void) const
{
	if (this->_number.length() != 0)
		return (this->_number);
	else
		return (NULL);
}
std::string Contact::get_secret(void) const
{
	if (this->_secret.length() != 0)
		return (this->_secret);
	else
		return (NULL);
}

void Contact::add_index(int i)
{
	this->_index = i;
}

int Contact::get_index(void)
{
	return (this->_index);
}

bool Contact::set_first_name(void)
{
	std::string temp;
	int i;

	i = 0;
	std::cout << "Enter first name : ";
	std::getline (std::cin,temp);
	while(temp[i])
	{
		if (!(temp[i] >= 65 && temp[i] <= 90)
				&& temp[i] != 46 && temp[i] != 39
				&& !(temp[i] >= 97 && temp[i] <= 122) && temp[i] != 32)
		{
			std::cout << "ERROR : " << temp[i] << " is not a letter" << std::endl;
			return (false);
		}
		i++;
	}
	if (temp.empty() == false)
			this->_first_name = temp;
	else
		return (false);
	return (true);
}

bool Contact::set_last_name(void)
{
	std::string temp;
	int i;

	i = 0;
	std::cout << "Enter last name : ";
	std::getline(std::cin, temp);
	while(temp[i])
	{
		if (!(temp[i] >= 65 && temp[i] <= 90)
				&& temp[i] != 46 && temp[i] != 39
				&& !(temp[i] >= 97 && temp[i] <= 122) && temp[i] != 32)
		{
			std::cout << "ERROR : " << temp[i] << " is not a letter" << std::endl;
			return (false);
		}
		i++;
	}
	if (temp.empty() == false)
		this->_last_name = temp;
	else
		return (false);
	return (true);
}

bool Contact::set_nickname(void)
{
	std::string temp;
	
	std::cout << "Enter nickname : ";
	std::getline(std::cin, temp);
	if (temp.empty() == false)
		this->_nickname = temp;
	else
		return (false);
	return (true);
}

bool Contact::set_number(void)
{
	std::string temp;
	int i;
	int num;

	num = 0;
	i = 0;	
	std::cout << "Enter phone number : ";
	std::getline(std::cin, temp);
	while(temp[i])
	{
		if (temp[i] >= 48 && temp[i] <= 57)
				num++;
		if (!(temp[i] >= 48 && temp[i] <= 57) 
			&& temp[i] != 32 && temp[i] != 45 && temp[i] != 46)
		{
			std::cout << "ERROR : " << temp[i] << " is not a number" << std::endl;
			return (false);
		}
		i++;
	}
	if (num != 10)
	{
		std::cout << "ERROR : phone number must have 10 number" << std::endl;
		return (false);
	}
	if (temp.empty() == false)
		this->_number = temp;
	else
		return (false);
	return (true);
}

bool Contact::set_secret(void)
{
	std::string temp;
	
	std::cout << "Enter darkest secret : ";
	std::getline(std::cin, temp);
	if (temp.empty() == false)
		this->_secret = temp;
	else
		return (false);
	return (true);
}

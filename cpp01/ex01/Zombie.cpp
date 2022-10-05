/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:24:15 by ssar              #+#    #+#             */
/*   Updated: 2021/12/04 13:10:20 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
	return ;
}

Zombie::~Zombie (void)
{
	std::cout << this->_name << "'s instance is deleted" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << "<" << this->_name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}

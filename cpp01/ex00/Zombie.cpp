/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:26:11 by ssar              #+#    #+#             */
/*   Updated: 2021/12/06 19:56:06 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (std::string name)
{
	this->_name = name;
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

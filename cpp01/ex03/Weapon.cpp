/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:52:24 by ssar              #+#    #+#             */
/*   Updated: 2021/12/04 14:33:38 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string name)
{
	this->setType(name);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string Weapon::getType(void) const
{
	const std::string &ret = this->_weapon_type;
	return (ret);
}

void Weapon::setType(std::string name)
{
	this->_weapon_type = name;
	return ;
}

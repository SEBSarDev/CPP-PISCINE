/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:27:11 by ssar              #+#    #+#             */
/*   Updated: 2021/12/06 19:59:08 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// TEAM RED
Zombie* newZombie(std::string name)
{
	Zombie *zomb; // on determine un pointeur ou stocker le nouveau zombie

	zomb = new Zombie(name); // creation d'un nouvel objet avec new
	return (zomb); // retourne le Zombie, il n'est donc pas supprimer a la sortie de fonction
}

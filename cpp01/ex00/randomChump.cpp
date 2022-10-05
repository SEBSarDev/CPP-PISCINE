/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:27:23 by ssar              #+#    #+#             */
/*   Updated: 2021/12/06 20:00:09 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//TEAM VERTE
void randomChump(std::string name)
{
	Zombie instance_zombie(name); // on cree un zombie via une instance (un peu comme si on appele 
							//une variable, c'est deja alloue sur la stack, pas besoin d'alloue sur la heap

	instance_zombie.announce(); // on appelle directement la fonction membre announce
	return ; // sortie de fonction, comme toutes autres variables, l'instance alloue sur la stack ici est supprimee
}

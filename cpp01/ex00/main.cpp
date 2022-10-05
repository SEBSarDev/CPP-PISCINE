/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:27:00 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:27:02 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name );
void randomChump( std::string name );

int main()
{
	Zombie *ptr_james;
	Zombie *ptr_sirius;
	Zombie *ptr_remus;
	Zombie *ptr_peter;
	Zombie *ptr_dumby;

	//TEAM RED on appelle la fonction, elle nous retourne un onjet Zombie, on va faire l'appelle de announce dans le main
	std::cout << "\33[30;36m" << "--- creation de la TEAM RED avec newZombie ---" << "\x1b[0m" << std::endl;
	ptr_james = newZombie("James");
	ptr_sirius = newZombie("Sirius");
	ptr_remus = newZombie("Remus");
	ptr_peter = newZombie("Peter");
	ptr_dumby = newZombie("Albus Wulfric Perceval Brian");
	std::cout << "\33[30;36m" << "--- annonce de la TEAM RED ---" << "\x1b[0m" << std::endl;
	std::cout << "\33[30;31m";
	ptr_james->announce();
	ptr_sirius->announce();
	ptr_remus->announce();
	ptr_peter->announce();
	ptr_dumby->announce();
	std::cout << "\x1b[0m";

	//TEAM VERTE on appelle randomChump qui va faire s'annoncer les zombie directement
	std::cout << std::endl;
	std::cout << "\33[30;36m" << "--- appelle de RandomChump, creation, appelle et destruction de la TEAM VERTE ---" << "\x1b[0m" << std::endl;
	std::cout << "\33[30;32m";
	randomChump("Tom");
	randomChump("Bella");
	randomChump("Fenrir");
	randomChump("Severus");
	randomChump("Alecto");
	std::cout << "\x1b[0m";

	//Suppression de la TEAM RED, car on a alloue sur la heap, il n'ont pas ete supprimee a la sortie de la fonction newZombie
	std::cout << std::endl;
	std::cout << "\33[30;36m" << "-->free les zombies de la TEAM RED" << "\x1b[0m" << std::endl;
	std::cout << "\33[30;31m";
	delete ptr_james;
	delete ptr_sirius;
	delete ptr_remus;
	delete ptr_peter;
	delete ptr_dumby;
	std::cout << "\x1b[0m";
	std::cout << "\33[30;36m" << "-->fin des frees" << "\x1b[0m" << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:25:31 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:25:38 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie *hordeHarry;
	Zombie *hordeVoldi;
	int i;
	
	std::cout << "\33[30;31m" << "--- creation des 2 hordes ---" << "\x1b[0m" << std::endl;
	hordeHarry = zombieHorde(20, "Harry");
	hordeVoldi = zombieHorde(5, "Voldemort");
	std::cout << std::endl;
	std::cout << "\33[30;31m" << "--- annonce des 2 hordes ---" << "\x1b[0m" << std::endl;
	for (i = 0; i < 20; i++)
			hordeHarry[i].announce();
	std::cout << std::endl;
	for (i = 0; i < 5; i++)
			hordeVoldi[i].announce();
	std::cout << std::endl;
	std::cout << "\33[30;31m" << "--- suppression des 2 hordes ---" << "\x1b[0m" << std::endl;
	delete [] hordeHarry;
	delete [] hordeVoldi;
	return (0);
}

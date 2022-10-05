/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:23:56 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:47:28 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	//std::cout << "adresse pointee par le pointeur : " << stringPTR << std::endl;
	//std::cout << "adresse de str : " << &str << std::endl;
	// --> reference don't have their own addresses, they are bound to an object and can't be reseated to another object.
	//   == elles se refere tjrs a l'objet et non a elle meme
	std::cout << "adresse du pointeur de str : " << &stringPTR << std::endl;
	std::cout << "adresse de la reference de str : " << &stringREF << std::endl;
	std::cout << "affichage de str via le pointeur : " << *stringPTR << std::endl;
	std::cout << "affichage de str via la reference : " << stringREF << std::endl;
}

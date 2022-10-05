/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:30:30 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:30:42 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhoneBook.hpp"

int main()
{
	int stop;
	int ret;
	std::string stock;
	PhoneBook instance_phone_book;

	stop = 0;
	while (stop == 0)
	{
		std::cout << "please enter an action : ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, stock);
		if (stock == "ADD")
		{
			if (instance_phone_book.add_new() == false)
			{	
				std::cout << "---> FAILURE : can't add contact" << std::endl << std::endl;
					continue;
			}
		}
		else if (stock == "SEARCH")
		{
			instance_phone_book.show_all();
			std::cout << std::endl << " --> To see more info, choose an index : ";
			std::cin >> ret;
			std::cin.clear();
			std::cin.ignore();
			instance_phone_book.show_index(ret);
		}
		else if (stock == "EXIT")
			stop = 1;
		else
		{
			std::cout << "--> ERROR : unknown action \"" << stock << "\"" << std::endl;
			std::cout << "usage : ADD || SEARCH || EXIT" << std::endl << std::endl;
		}
	}
	return (0);
}

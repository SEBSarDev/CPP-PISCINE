/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssar <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 08:28:02 by ssar              #+#    #+#             */
/*   Updated: 2021/12/03 08:28:04 by ssar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

void megaphone(char **argv)
{
	int i;
	int j;
	int len;

	i = 0;
	while (argv[++i])
	{
		len = std::strlen(argv[i]);
		for (j = 0; j < len; j++)
			std::cout << (char)std::toupper(argv[i][j]);
		std::cout << " ";
	}
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc <= 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
	else
		megaphone(argv);
	return (0);
}

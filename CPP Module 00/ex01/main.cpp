/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:27:42 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/23 16:27:43 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook	pb;
	std::string	str;

	while (1)
	{
		std::cout << "> ";
		std::getline(std::cin, str);
		if (str == "ADD")
			pb.add();
		else if (str == "SEARCH")
			pb.search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Enter a valid command!" << std::endl;
	}
	return (0);
}

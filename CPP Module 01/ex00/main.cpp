/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:19:54 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/05 13:41:34 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie x("Foo");
	Zombie *z;
	x.announce();
	z = newZombie("Zoo");
	z->announce();
	delete (z);
	randomChump("Random Zomb");
}

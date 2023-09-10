/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:23:34 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/25 13:23:35 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie *zomb = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zomb[i].setName(name);
	}
	return (zomb);
}

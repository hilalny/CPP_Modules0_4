/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:23:04 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/10 19:14:22 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N;
    
    N = 5;
    Zombie *zomb = zombieHorde(N, "Foo");
    for (int i = 0; i < N; i++) {
        zomb[i].announce();
    }
    delete[] zomb;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:26:36 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/24 16:51:33 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int j;

    if (ac < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {        
        for (int i = 1; i < ac; i++)
        {
            j = -1;
            while (av[i][++j])
                std::cout << (char)std::toupper(av[i][j]);
        }
        std::cout << std::endl;
    }
}

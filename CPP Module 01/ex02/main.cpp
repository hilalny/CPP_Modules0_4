/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:23:48 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/04 09:26:32 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "memmory address of str: " << &str << std::endl;
    std::cout << "memmory address held by pointer: " << stringPTR << std::endl;
    std::cout << "memmory addres held by reference: " << &stringREF << std::endl;
    std::cout << "value of str: " << str << std::endl;
    std::cout << "value of pointed by pointer: " << *stringPTR << std::endl;
    std::cout << "value of pointed by reference: " << stringREF << std::endl;
}

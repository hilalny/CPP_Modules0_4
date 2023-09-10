/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:24:08 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/25 13:24:09 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string _name) : name(_name), weapon(NULL) {}

HumanB::~HumanB() {}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:24:36 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/25 13:24:42 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string _type) {
    this->type = _type;
}

Weapon::~Weapon() {}

void    Weapon::setType(std::string _type) {
    this->type = _type;
}

const std::string &Weapon::getType() {
    return (this->type);
}

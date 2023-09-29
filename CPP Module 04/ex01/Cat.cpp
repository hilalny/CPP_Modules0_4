/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:44:07 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/25 15:44:08 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called\n";
    Animal::type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& copy) {
    std::cout << "Cat copy constructor called\n";
    *this = copy;
}

Cat &Cat::operator=(const Cat& copy) {
    Animal::type = copy.type;
    this->brain = copy.brain;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "meow meow\n";
}

Brain *Cat::getBrain() const {
    return brain;
}

Cat::~Cat() {
    std::cout << "Cat destructor called\n";
    delete brain;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 15:45:05 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/25 15:45:06 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called\n";
    for (int i = 0; i < 100; ++i) {
        ideas[i] = "some animalistic ideas";
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called\n";
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor called\n";
    *this = copy;
}

Brain &Brain::operator=(const Brain& copy) {
    for (size_t i = 0; i < copy.ideas->size(); i++) {
        this->ideas[i] = copy.ideas[i];
    }
    return (*this);
}

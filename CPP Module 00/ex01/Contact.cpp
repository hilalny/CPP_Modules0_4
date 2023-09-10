/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:26:57 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/24 16:40:43 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() const {
	return (this->firstName);
}

std::string Contact::getLastName() const {
	return (this->lastName);
}

std::string Contact::getNickName() const {
	return (this->nickName);
}

std::string Contact::getNumber() const {
	return (this->number);
}

std::string Contact::getSecret() const {
	return (this->secret);
}

void		Contact::setFirstName(std::string str) {
	this->firstName = str;
}

void		Contact::setLastName(std::string str) {
	this->lastName = str;
}

void		Contact::setNickName(std::string str) {
	this->nickName = str;
}

void		Contact::setNumber(std::string str) {
	this->number = str;
}

void		Contact::setSecret(std::string str) {
	this->secret = str;
}

Contact::Contact() {}

Contact::~Contact() {}

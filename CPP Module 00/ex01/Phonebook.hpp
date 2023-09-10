/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:27:55 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/23 16:27:56 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		Contact	_contact[8];
		int		index;
		int		flag;
	public:
		Phonebook();
		~Phonebook();
		void	add();
		void	search();
};

void	printHood();
void    printContacts(Contact _contact[8], int j);
void	printDetail(Contact _contact[8], int row);

#endif

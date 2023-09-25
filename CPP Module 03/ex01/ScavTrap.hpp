/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:25 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/22 09:10:26 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		/*				Functions				*/

		void 		guardGate		();

		/*			Orthodox Canonical Form			*/

					ScavTrap		();
					ScavTrap		(const std::string &);
					ScavTrap		(const ScavTrap &);
					~ScavTrap		();

		ScavTrap	&operator=		(const ScavTrap &);

};

std::ostream	&operator<<(std::ostream &stream, ScavTrap &);

#endif
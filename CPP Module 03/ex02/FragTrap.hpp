/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:10:02 by hyolasig          #+#    #+#             */
/*   Updated: 2023/09/22 09:10:03 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:

		/*				Functions				*/

	    void		highFivesGuys	(void);

		/*			Orthodox Canonical Form			*/

					FragTrap		();
					FragTrap		(const std::string &);
					FragTrap		(const FragTrap &);
					~FragTrap		();

		FragTrap	&operator=		(const FragTrap &);

};

std::ostream	&operator<<(std::ostream &stream, FragTrap &);

#endif
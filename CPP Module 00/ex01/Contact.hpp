/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyolasig <hyolasig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:27:15 by hyolasig          #+#    #+#             */
/*   Updated: 2023/08/23 16:27:17 by hyolasig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP

# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string number;
        std::string secret;
    public:
        Contact();
        ~Contact();
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getNumber() const;
        std::string getSecret() const;
        void        setFirstName(std::string str);
        void        setLastName(std::string str);
        void        setNickName(std::string str);
        void        setNumber(std::string str);
        void        setSecret(std::string str);
};

#endif


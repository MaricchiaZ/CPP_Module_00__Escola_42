/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:46:22 by maclara-          #+#    #+#             */
/*   Updated: 2023/06/11 18:21:17 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

class PhoneBook{
    
public:

    Contact    *list_contacts[8];
    
    void search_contact(int id);
    void add(void);
    void exit(void);

    PhoneBook();
    ~PhoneBook();

private:
    int nbr_contact;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:47:11 by maclara-          #+#    #+#             */
/*   Updated: 2023/06/11 17:44:44 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(int ind, char *f_nm, char *nicknm, char* phone_nb, char *secret): \
index(ind), first_name(f_nm), nickname(nicknm), phone_number(phone_nb), darkest_secret(secret){

    return ;
}

Contact::Contact(void){

    return ;
}

Contact::~Contact(void){

    return ;
}
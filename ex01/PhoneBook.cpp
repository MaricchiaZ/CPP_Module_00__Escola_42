/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:46:17 by maclara-          #+#    #+#             */
/*   Updated: 2023/06/11 19:56:28 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void){
    for(int i = 0; i < 8; i++)
        list_contacts[i] = NULL;
    this->nbr_contact = 0;
    return ;
}

PhoneBook::~PhoneBook(void){
    return ;
}

void    PhoneBook::add(void){

    char temp_buff[100];
    Contact new_contact;
    
    new_contact.index = PhoneBook::nbr_contact;
    
    std::cout >> "Name of contact: ";
    std::cin >> temp_buff;
}

void    PhoneBook::search_contact(int id){
    
}

void    PhoneBook::exit(void){
   PhoneBook::~PhoneBook();
    return ;
;}


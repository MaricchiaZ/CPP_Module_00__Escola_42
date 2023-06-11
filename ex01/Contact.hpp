/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 16:47:16 by maclara-          #+#    #+#             */
/*   Updated: 2023/06/11 19:53:34 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact{
public:
    int index;
    char *first_name;
    char *nickname;
    char *phone_number;
    char *darkest_secret;

    Contact(void);
    ~Contact(void);

    Contact(int index, char *first_name, char *nickname, char* phone_number, char *darkest_secret);
};
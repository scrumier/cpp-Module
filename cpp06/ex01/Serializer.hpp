/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:36:10 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 11:44:15 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <stdint.h>

struct Data {
    int value;
};

class Serializer {
    private:
        Serializer();
        Serializer(const Serializer &);
        Serializer &operator=(const Serializer &);
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
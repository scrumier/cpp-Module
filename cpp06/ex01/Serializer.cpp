/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:36:12 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 11:44:32 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

Serializer::Serializer() {
}

Serializer::Serializer(const Serializer &) {
}

Serializer &Serializer::operator=(const Serializer &) {
    return *this;
}


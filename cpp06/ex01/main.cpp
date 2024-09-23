/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:33:01 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/23 11:35:53 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main() {
    Data originalData;
    originalData.value = 42;

    // Serialize the Data pointer
    uintptr_t raw = Serializer::serialize(&originalData);

    // Deserialize back to a Data pointer
    Data* deserializedData = Serializer::deserialize(raw);

    // Check if the original and deserialized pointers point to the same object
    if (&originalData == deserializedData) {
        std::cout << "Serialization and deserialization were successful!" << std::endl;
        std::cout << "Original value: " << originalData.value << std::endl;
        std::cout << "Deserialized value: " << deserializedData->value << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}
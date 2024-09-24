/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:04:21 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 09:12:34 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void print(int const &i) {
    std::cout << i << std::endl;
}

void print(std::string const &s) {
    std::cout << s << std::endl;
}

int main(void) {
    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, print);
    std::string tab2[] = {"salut", "le", "correcteur", "super", "sympa"};
    iter(tab2, 5, print);
    return 0;
}
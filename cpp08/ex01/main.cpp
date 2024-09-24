/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:48:19 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 14:26:42 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>
#define ARGS true

int main(int ac, char **av) {

    if (ARGS == true) {
        if (ac < 2) {
            std::cerr << "Usage: ./span [n] [n1] [n2] ... [n]" << std::endl;
            return 1;
        }
        Span sp = Span(ac - 1);
        for (int i = 1; i < ac; i++) {
            int nbr = std::atoi(av[i]);
            sp.addNumber(nbr);
        }
        try {
            std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
            std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        } catch (const Span::SpanException &e) {
            std::cerr << e.what() << std::endl;
            return 1;
        }
    } else {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    return 0;
}
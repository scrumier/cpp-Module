/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:45:35 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 09:02:57 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include <string>

int main(void) {
    // Testing with integers
    int i1 = 42;
    int i2 = 21;
    std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
    swap(i1, i2);
    std::cout << "i1 = " << i1 << ", i2 = " << i2 << std::endl;
    std::cout << "min(i1, i2) = " << min(i1, i2) << std::endl;
    std::cout << "max(i1, i2) = " << max(i1, i2) << std::endl << std::endl << std::endl;

    // Testing with std::string
    std::string s1 = "42";
    std::string s2 = "21";
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
    swap(s1, s2);
    std::cout << "s1 = " << s1 << ", s2 = " << s2 << std::endl;
    std::cout << "min(s1, s2) = " << ::min(s1, s2) << std::endl;
    std::cout << "max(s1, s2) = " << ::max(s1, s2) << std::endl << std::endl << std::endl;

    // Testing with characters
    char c1 = 'a';
    char c2 = 'b';
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
    swap(c1, c2);
    std::cout << "c1 = " << c1 << ", c2 = " << c2 << std::endl;
    std::cout << "min(c1, c2) = " << min(c1, c2) << std::endl;
    std::cout << "max(c1, c2) = " << max(c1, c2) << std::endl << std::endl << std::endl << std::endl;
    
    
    std::cout << "Test of the subject" << std::endl;
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}

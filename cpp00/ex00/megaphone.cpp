/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:01:27 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/26 13:02:25 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	char c;
    if (ac == 1){
        std::cout << "HAYOOOOOOOOOOOOOOOOOO" << std::endl;
        return 0;
    }
	for (int i = 1; i < ac; i++){
		for (int j = 0; j < (int)strlen(av[i]); j++){
			c = toupper(av[i][j]);
			std::cout << c;
		}
		if (i < ac - 1)
			std::cout << " ";
	}
}

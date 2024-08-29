/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:58:29 by scrumier          #+#    #+#             */
/*   Updated: 2024/08/29 13:46:33 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::ifstream file;
	std::ofstream file2;
	std::string line;
	
	if (ac == 4)
	{
		filename = av[1];
		s1 = av[2];
		s2 = av[3];


		file.open(filename.c_str());
		file2.open((filename + ".replace").c_str());


		if (file.is_open())
		{
			if (file2.is_open())
			{
				while (std::getline(file, line))
				{
					size_t pos = line.find(s1, 0);
					while (pos != std::string::npos)
					{
						line.erase(pos, s1.length());
						line.insert(pos, s2);
						pos += s2.length();
						pos = line.find(s1, pos + s2.length());
					}
					file2 << line << std::endl;
				}
				file.close();
				file2.close();
			}
			else
			{
				std::cerr << "Error: file not created" << std::endl;
				return (1);
			}
		}
		else
		{
			std::cerr << "Error: file not found" << std::endl;
			return (1);
		}
	}
	else
	{
		std::cerr << "Wrong number of arguments" << std::endl;
	}
	
	return 0;
}

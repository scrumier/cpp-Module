/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:43:31 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/25 11:46:22 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "BitcoinExchange.hpp"

char check_separator(const std::string &line) {
	if (line.find(',') != std::string::npos) {
		return ',';
	} else if (line.find('|') != std::string::npos) {
		return '|';
	}
	throw std::runtime_error("Error: unknown separator in the file.");
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cerr << "Error: could not open file." << std::endl;
		return 1;
	}

	try {
		BitcoinExchange btcExchange("data.csv");
		
		std::ifstream file(argv[1]);
		if (!file.is_open()) {
			std::cerr << "Error: could not open file." << std::endl;
			return 1;
		}

		std::string firstLine;
		if (!getline(file, firstLine)) {
			throw std::runtime_error("Error: empty file.");
		}
		char sep = check_separator(firstLine);
		file.clear();
		file.seekg(0);

		std::string line;
        bool firstLineProcessed = false;
        while (getline(file, line)) {
            if (!firstLineProcessed) {
				firstLineProcessed = true;
				std::string expectedHeader = "date";
				expectedHeader += sep;
				expectedHeader += "value";
				std::string expectedHeader2 = "date ";
				expectedHeader2 += sep;
				expectedHeader2 += " value";
				if (line == expectedHeader || line == expectedHeader2) {
					continue;
				}
			}

            std::istringstream iss(line);
            std::string date;
            float value;

            if (getline(iss, date, sep) && (iss >> value)) {
                if (value < 0) {
                    std::cerr << "Error: not a positive number." << std::endl;
                } else if (value > 1000) {
                    std::cerr << "Error: too large a number." << std::endl;
                } else {
                    float rate = btcExchange.getBitcoinPrice(date);
                    std::cout << date << " => " << value << " = " << value * rate << std::endl;
                }
            } else {
                std::cerr << "Error: bad input => " << line << std::endl;
            }
        }
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
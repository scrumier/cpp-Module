/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:52:21 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/09 08:44:32 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <vector>

class BitcoinExchange {
public:
    BitcoinExchange();
    BitcoinExchange(const std::string &csvFile);
    ~BitcoinExchange();
    BitcoinExchange& operator=(const BitcoinExchange &rhs);
    float getBitcoinPrice(const std::string &date) const;

private:
    std::map<std::string, float> _data;
    void loadData(const std::string &csvFile);
};

#endif

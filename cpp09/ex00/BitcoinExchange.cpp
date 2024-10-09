/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:52:25 by scrumier          #+#    #+#             */
/*   Updated: 2024/10/09 08:41:15 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
}

BitcoinExchange::BitcoinExchange(const std::string &csvFile) {
    loadData(csvFile);
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &rhs) {
    if (this != &rhs)
        _data = rhs._data;
    return *this;
}

float BitcoinExchange::getBitcoinPrice(const std::string &date) const {
    std::map<std::string, float>::const_iterator it = _data.lower_bound(date);
    if (it == _data.begin())
        return it->second;
    if (it == _data.end() || it->first != date)
        return (--it)->second;
    return it->second;
}

void BitcoinExchange::loadData(const std::string &csvFile) {
    std::ifstream file(csvFile.c_str());
    if (!file.is_open())
        return;
    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string date;
        float price;
        if (getline(iss, date, ',') && iss >> price)
            _data[date] = price;
    }
}
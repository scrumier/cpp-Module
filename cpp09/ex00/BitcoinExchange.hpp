/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 08:52:21 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/25 09:09:58 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <stdexcept>

class BitcoinExchange {
public:
    BitcoinExchange(const std::string &csvFile);
    float getBitcoinPrice(const std::string &date) const;

private:
    std::map<std::string, float> _data;
    void loadData(const std::string &csvFile);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:40:35 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 11:43:23 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::value_type easyfind(T src, int to_find) {
    typename T::iterator it = std::find(src.begin(), src.end(), to_find);
    if (it == src.end())
        throw std::exception();
    return *it;
}
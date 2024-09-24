/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:46:46 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 08:55:16 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T>
void	swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

#endif
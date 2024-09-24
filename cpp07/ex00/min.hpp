/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:48:01 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 08:55:27 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template <typename T>
T	min(T a, T b)
{
    if (a < b)
        return a;
    return b;
}

#endif
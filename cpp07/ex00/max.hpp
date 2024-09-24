/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrumier <scrumier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 08:48:28 by scrumier          #+#    #+#             */
/*   Updated: 2024/09/24 08:55:30 by scrumier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template <typename T>
T	max(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

#endif
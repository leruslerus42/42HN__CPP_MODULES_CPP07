/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:01:14 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/05 00:38:46 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/iter.hpp"



int main()
{
    std::string array[3];

    array[0] = "Hello ";
    array[1] = "42 ";
    array[2] = "Heilbronn";
    iter(array, 3, &f());
    return 0;
}
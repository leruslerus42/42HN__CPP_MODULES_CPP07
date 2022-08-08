/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:01:14 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/07 23:46:29 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/iter.hpp"

int main()
{
    std::string array[3];
    float array2[] = {42.42f, 39.43f, -142.14f};
    int len = 3;

    array[0] = "Hello ";
    array[1] = "42 ";
    array[2] = "Heilbronn";
    iter(array, len, &f);
    std::cout << "------------------------" << std::endl;
    iter(array2, len, &f);

    return 0;
}
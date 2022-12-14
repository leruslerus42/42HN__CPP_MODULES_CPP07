/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:01:00 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/07 23:33:55 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void f(const T &element)
{
    std::cout << "Element is: " << element << std::endl;
}

template <typename T>
void iter(T *array, int len, void(*f)(const T &))//T & f(T &array))
{
    int i = 0;
    while (i < len)
    {
        f(array[i]);
        i++;
    }
}
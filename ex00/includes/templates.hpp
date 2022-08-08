/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:34:16 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/07 23:56:05 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b){
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T const &min(T &a, T &b){
    return (a < b ? a : b);
}

template <typename T>
T const &max(T &a, T &b){
    return (a > b ? a : b);
}
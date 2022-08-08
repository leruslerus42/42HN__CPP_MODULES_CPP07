/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:25:46 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/08 23:41:38 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Array.hpp"

int main()
{
    Array<float> a;
    a.getArray();
    a.size();

    std::cout << "---------------------" << std::endl;
	
    Array<int> b(4);
    b.setArray(1, 0);
    b.setArray(2, 1);
    b.setArray(3, 2);

    b.getArray();
    b.size();

    std::cout << "---------------------" << std::endl;

    Array<std::string> c(4);
    c.setArray("Hello ", 0);
    c.setArray("42 ", 1);
    c.setArray("Heilbronn", 2);

    c.getArray();
    c.size();

    std::cout << "---------------------" << std::endl;

    Array<std::string> d = c;
    d.setArray("Paris", 2);
    
    d.getArray();
    d.size();

    std::cout << "---------------------" << std::endl;

    c.getArray();
    c.size();



    //system ("leaks array");
    return 0;
}
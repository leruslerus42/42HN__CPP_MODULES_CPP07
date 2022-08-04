/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:33:08 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/04 11:59:36 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/templates.hpp"

int main()
{
    std::cout << "MY TESTS" << std::endl;
    std::cout << "--------------------------" << std::endl;

    int x = -5;
    int y = 10;
    std::string w = "42";
    std::string z = "heilbronn";

    swap(x, y);
    std::cout << "x: " << x << " y:" << y << std::endl;    
    swap(w, z);
    std::cout << "w: " << w << " z:" << z << std::endl;

    std::cout << "--------------------------" << std::endl;
    std::cout << "min: " << min(x,y) << std::endl;    

    std::cout << "--------------------------" << std::endl;
    std::cout << "max: " << max(x,y) << std::endl;
    

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "42 TESTS" << std::endl;
    std::cout << "--------------------------" << std::endl;


    int a = 2;
    int b = 3;

    ::swap(a, b);
    std::cout << "a = " << a << " , b = " << b << std::endl;
    std::cout << "min(a,b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a,b) = " << ::max(a, b) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << " , d = " << d << std::endl;
    std::cout << "min(c,d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c,d) = " << ::max(c, d) << std::endl;


     return (0);
}
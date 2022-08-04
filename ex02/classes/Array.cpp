/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:26:02 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/05 01:32:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

Array::Array(void)
{
	std::cout << "Constructor called" << std::endl;
	
}
Array::Array(unsigned int n)
{
	array<T>[n] = {}; 
}


Array::~Array(void)
{
	std::cout << "Destructor called" << std::endl;
}

Array::Array(const Array &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Array	&Array::operator = (const Array &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

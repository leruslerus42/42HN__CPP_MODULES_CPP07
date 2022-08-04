/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:25:58 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/05 01:31:15 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		array<T>[];
	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(const Array &copy);

		Array	&operator = (const Array &copy);
};

#endif

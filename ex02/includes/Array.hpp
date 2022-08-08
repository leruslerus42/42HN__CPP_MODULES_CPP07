/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 01:25:58 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/08/08 23:40:44 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
		unsigned int	_start;
		
	public:
		Array(void): _size(0) {_array = new T[0];}
		Array(unsigned int n) : _size(n) {_array = new T[_size]; _start = 0; while (n--) _array[n] = _start;}
		~Array(void) {if (_size > 0) delete []_array;}
		
		Array(const Array &copy) 
		{ 
			_array = new T[copy._size];
			for (unsigned int i = 0; i < copy._size; i++)
				_array[i] = copy._array[i];
			_size = copy._size;
			_start = 0;

		}

		Array &operator = (const Array &copy)
		{
			delete [] _array;
			_array = new T[copy._size];

			for (unsigned int i = 0; i < copy._size; i++)
				_array[i] = copy._array[i];
			_size = copy._size;
			_start = 0;
			return (*this);
		}

		T &operator [] ( unsigned int i){
			try {
				if (i >= _size) 
					throw Array::IndexOutOfBondsException();
				return _array[i];
			}
			catch (Array::IndexOutOfBondsException())
			{
				std::cerr << "Exception catched: Index out of bonds!" << std::endl;
				exit(EXIT_FAILURE);
			}
			return (_array[0]);
		}
		
		void setArray(T value, int i)	{_array[i] = value;}
		
		void getArray()
		{
			while (_start < _size)
			{

				std::cout << "Element of array at index " << _start << " is: " << _array[_start] << std::endl;
				_start++;
			}
			_start = 0;
		}

		unsigned int size() {std::cout << "The Array's size is : " << _size << std::endl; return _size;}

		struct IndexOutOfBondsException: public std::exception {
			const char *what() const throw(){
				return ("Exception catched: Index out of bonds!");
			}
		};
};
#endif

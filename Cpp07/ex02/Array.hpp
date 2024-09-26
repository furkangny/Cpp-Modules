/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 23:03:38 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/24 23:03:38 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array {
	private:
		T *array;
		unsigned int _size;
	public:
		Array() {
			array = NULL;
			_size = 0;
		}
		Array(unsigned int n) {
			array = new T[n];
			_size = n;
		}
		Array(const Array &copy) {
			array = NULL;
			*this = copy;
		}
		Array &operator=(const Array &other) {
			// Kendi kendine atama kontrolü
			if (this != &other) {
				if (array)
					delete[] array;  // Önce eski belleği serbest bırakıyoruz
				_size = other._size;
				array = new T[_size];  // Yeni bellek tahsis ediyoruz
				for (unsigned int i = 0; i < _size; i++)
					array[i] = other.array[i];  // Elemanları kopyalıyoruz
			}
			return *this;
		}
		~Array() {
			delete[] array;
		}

		T &operator[](unsigned int i) {
			if (i >= _size)
				throw OutBoundsException();
			else
				return array[i];
		}
		unsigned int size() const {
			return _size;
		}
		class OutBoundsException : public std::exception {
			public:
				const char *what() const throw()
				{
					return "Index is out of bounds!";
				}
		};
};



#endif

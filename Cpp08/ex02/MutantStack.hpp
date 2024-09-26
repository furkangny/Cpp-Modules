/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:27:56 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/26 18:27:57 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>(){};
        ~MutantStack(){}
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){ return(std::stack<T>::c.begin()); }
        iterator end() { return(std::stack<T>::c.end()); }

};

#endif

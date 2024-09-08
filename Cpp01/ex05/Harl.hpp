/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 19:05:47 by fgunay            #+#    #+#             */
/*   Updated: 2024/08/04 19:05:48 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>


class Harl
{
private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
public:
		void complain( std::string level );

};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:02:06 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 20:02:13 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
	public:
		Intern();
		Intern(const Intern &intern);
		~Intern();
		Intern	&operator=(const Intern &intern);

	public:
		AForm *makeForm(const std::string formName, const std::string target) const;
		class MakeFormErrorException : public std::exception {
			public:
				virtual const char *what() const throw();
		};
};

/* creates a type alias called ConstructorPtr. This
alias refers to a pointer to a function that takes
a const std::string parameter and returns a pointer
to an AForm object. from now on it can be used like

void fun(ConstructorPtr c, const std::string& name) {
  AForm* form = c(name);
} */
typedef AForm* (*ConstructorPtr)(const std::string);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:57:15 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 19:57:16 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	// canonical form
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &bb);
		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

	public:
		Bureaucrat(const std::string &name, int grade);

	public:
		void increaseGrade(void);
		void decreaseGrade(void);
		const std::string getName(void) const;
		int getGrade(void) const;

	public:
		void signForm(AForm &Aform);
		void executeForm(const AForm &form) const;

	public:
		class GradeTooHighException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
		public:
			virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif

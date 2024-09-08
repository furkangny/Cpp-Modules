/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:53:31 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 19:53:32 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);

public:
	Bureaucrat(const std::string name, int grade);
	void signForm(Form &form) const;

public:
	std::string getName() const;
	int getGrade() const;

public:
	void incrementGrade();
	void decrementGrade();

public:
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw() { return "grade too high"; }
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw() { return "grade too low"; }
	};
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif

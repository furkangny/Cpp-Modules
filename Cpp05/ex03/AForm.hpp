/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:01:16 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 20:01:24 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	const int _gradeToSign;
	const int _gradeToExecute;
	bool _signed;

public:
	AForm();
	virtual ~AForm();
	AForm(const std::string &name, int gradeToSign, int gradeToExecute);
	AForm(const AForm &Aform);

public:
	AForm &operator=(const AForm &Aform);

	const std::string getName(void) const;
	bool getSigned(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;

	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const = 0;
	void executeCheck(const Bureaucrat &bureaucrat) const;

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
	class ExecuteNotSigned : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class FileOpeningFail : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, const AForm &Aform);

#endif

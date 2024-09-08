/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:58:20 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 19:58:32 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

class AForm;

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)\
 : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)\
 : AForm("PresidentialPardonForm", 25, 5), _target(src._target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	(void)obj;
    return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->AForm::executeCheck(executor);
	std::cout << "We came to inform that " << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:58:54 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 19:58:55 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const& src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

		void execute(Bureaucrat const & executor) const;

	private:
		const std::string _target;
};

#endif

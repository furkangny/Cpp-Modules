/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgunay <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:53:31 by fgunay            #+#    #+#             */
/*   Updated: 2024/09/07 19:53:32 by fgunay           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* int main() {
	Bureaucrat b1;
	std::cout << b1.getGrade() << std::endl;
	std::cout << b1.getName() << std::endl;
} */

/* int main()
{
	Bureaucrat b1("bugra", 50);
	std::cout << b1.getName() << std::endl;
	std::cout << b1.getGrade() << std::endl;
	Bureaucrat b2 = b1;
	std::cout << b2.getName() << std::endl;
	std::cout << b2.getGrade() << std::endl;
} */

/* int main()
{
	// Bureaucrat b1("bugra", 150);
	// b1.decrementGrade();

	// Bureaucrat b1("bugra", 1);
	// b1.incrementGrade();

	std::cout << b1.getGrade() << std::endl;
	std::cout << b1.getName() << std::endl;
} */

/* int main() {
	Bureaucrat b1("bugra", 52);
	std::cout << b1 << std::endl;
} */

/* int main()
{
	Bureaucrat b1("bugra", 50);
	std::cout << b1.getName() << std::endl;
	std::cout << b1.getGrade() << std::endl;
	Bureaucrat b2;
	b2 = b1;
	std::cout << b2.getName() << std::endl;
	std::cout << b2.getGrade() << std::endl;
} */

/* int main()
{
	// eğer böyle çağırırsan =operator() çalışıyor ama
	Bureaucrat b1;
	Bureaucrat b2;
	b2 = b1;
} */

/* int main()
{
	// böyle çağırırsan sadece copy constructor() çağrılıyor
	Bureaucrat b1;
	Bureaucrat b2 = b1;
}  */

/*

int main()
{
	try
	{
		Bureaucrat bureaucrat("Daryl", 50);
		std::cout << bureaucrat << std::endl;

		bureaucrat.incrementGrade();
		std::cout << bureaucrat << std::endl;

		bureaucrat.decrementGrade();
		std::cout << bureaucrat << std::endl;

		Bureaucrat invalidBureaucrat("Rick", 0);
	}
	catch (exception &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}

	return (0);
} */

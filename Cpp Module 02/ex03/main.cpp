/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:54:44 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/06 10:19:43 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

int main(void)
{
	{
	const Point a;
	const Point b(10, 0);
	const Point c(0, 10);
	const Point point(1, 1);

	if (bsp(a, b, c, point) == true)
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	}
	std::cout << "\n--------------------------------------\n" << std::endl;
	{
	Point a(-1.5, -1.5);
	Point b(2.5, 2.5);
	Point c(-1, -2);
	Point point(8.5, -9);
	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	return (0);
}
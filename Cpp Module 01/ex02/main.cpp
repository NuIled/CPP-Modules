/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 05:27:42 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 17:35:55 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* ptr = &str;
    std::string& pt = str;
    std::cout << &str << std::endl;
    std::cout << ptr << std::endl;
    std::cout << &pt << std::endl;
    std::cout << str << std::endl;
    std::cout << *ptr << std::endl;
    std::cout << pt << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 05:11:38 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 09:33:26 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
#define Harl_HPP
#include <iostream>
#define Log(x) std::cout << x << std::endl;

class Harl {
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
public:
		Harl();
		void complain( std::string level );
		~Harl();
};

#endif // Harl_H

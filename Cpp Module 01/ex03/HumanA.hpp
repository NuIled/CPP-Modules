/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:31 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/03 12:53:39 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	std::string _name;
	Weapon &Weapons;
public:
		HumanA(std::string name,Weapon &object);
		~HumanA();
		void attack(void);
};

#endif // humanA_H

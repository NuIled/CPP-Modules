/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:37 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/04 11:41:22 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
	std::string _name;
	Weapon *Weapons;
	bool have_weapons;
public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &Wepon);
		void attack(void);
};

#endif // humanB_H

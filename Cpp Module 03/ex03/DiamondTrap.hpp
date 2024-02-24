/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:33:40 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/14 00:29:42 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap {
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &obj);
	const DiamondTrap& operator=(const DiamondTrap &obj);
	~DiamondTrap();
	void whoAmI(void);
	void attack(const std::string& target);
};

#endif // DiamondTrap_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 23:56:44 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/03 12:53:25 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>


class Weapon
{
	std::string _weapon;
public:
	const std::string &getter() const;
	void setType(std::string new_s);
	Weapon(std::string str);
	~Weapon();
};

#endif // wepon_H

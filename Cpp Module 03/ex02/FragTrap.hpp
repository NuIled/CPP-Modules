/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoutifra <aoutifra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:08:29 by aoutifra          #+#    #+#             */
/*   Updated: 2023/11/11 15:18:33 by aoutifra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_H
#define FragTrap_H

#include "ScavTrap.hpp"

class FragTrap :public ClapTrap{
public:
	FragTrap(const std::string &name);
	~FragTrap();
	FragTrap(const FragTrap &obj);
	const FragTrap& operator=(const FragTrap &obj);
	void highFivesGuys(void);
};

#endif // FragTrap_H

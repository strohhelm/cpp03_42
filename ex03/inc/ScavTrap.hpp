/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:46:31 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 17:53:05 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& original);
		~ScavTrap();
		ScavTrap& operator=(const ScavTrap& original);
		
		void	attack(const std::string& target);
		void	guardGate(void);
};
void make_attack_happen(ScavTrap& attacker, ClapTrap &target);
void make_attack_happen(ScavTrap& attacker, ScavTrap &target);
void make_attack_happen(ClapTrap& attacker, ScavTrap &target);

#endif
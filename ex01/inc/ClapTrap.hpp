/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:26:27 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/25 17:09:58 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define X   "\033[0m"
#define R   "\033[31m"
#define G   "\033[32m"
#define Y   "\033[33m"
#define B   "\033[34m"
#define M   "\033[35m"
#define C   "\033[36m"
#define W   "\033[37m"

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& original);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& original);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_health_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

#endif
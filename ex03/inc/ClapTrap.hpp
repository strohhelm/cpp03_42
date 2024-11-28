/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:26:27 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 17:53:27 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#define X	"\033[0m"
#define R	"\033[31m"
#define G	"\033[32m"
#define L	"\033[38;2;50;150;50m"
#define D	"\033[38;2;155;220;255m"
#define Y	"\033[33m"
#define	O	"\033[38;2;255;165;0m"
#define B	"\033[34m"
#define M	"\033[35m"
#define C	"\033[36m"
#define W	"\033[37m"

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& original);
		ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ap);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& original);

		virtual void	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string	getName(void);
		int			getAttackDamage(void);
		int			getHealthPoints(void);
		int			getEnergyPoints(void);
		void		get_status(void);


	protected:
		std::string		_name;
		unsigned int	_health_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;
};

void make_attack_happen(ClapTrap& attacker, ClapTrap &taget);

#endif
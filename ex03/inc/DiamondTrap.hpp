/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:07:17 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 17:53:20 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"
#include <string>
#include <iostream>


class DiamondTrap :  public ScavTrap,  public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(const DiamondTrap& original);
		DiamondTrap(std::string name);
		DiamondTrap& operator=(const DiamondTrap& original);
		
		void whoAmI(void);

	private:
			std::string	_name;
};

#endif
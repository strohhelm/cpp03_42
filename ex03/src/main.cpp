/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:02 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 20:20:09 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main (void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;
	DiamondTrap	lol;
	DiamondTrap& rlol = lol;
	DiamondTrap lol2("Lol");
	DiamondTrap	rick("Rick");
	DiamondTrap	bud("Bud");
	
	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;
	lol.whoAmI();
	lol.get_status();
	lol = lol2;
	lol = rlol;
	lol.whoAmI();
	lol.get_status();
	lol.highFiveGuys();
	
	rick.whoAmI();
	rick.get_status();
	rick.highFiveGuys();

	make_attack_happen(lol, rick);
	lol.get_status();
	rick.get_status();
	make_attack_happen(rick, bud);
	lol.takeDamage(500);
	lol.whoAmI();
	lol.get_status();
	lol = bud;
	lol.get_status();
	lol.beRepaired(800);
	lol.get_status();
	bud.whoAmI();
	bud.get_status();
	
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;
}
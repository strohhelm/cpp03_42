/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:02 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 16:05:58 by pstrohal         ###   ########.fr       */
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
	lol.getStatus();
	lol = lol2;
	lol = rlol;
	lol.whoAmI();
	lol.getStatus();
	lol.highFiveGuys();
	
	rick.whoAmI();
	rick.getStatus();
	rick.highFiveGuys();

	make_attack_happen(lol, rick);
	lol.getStatus();
	rick.getStatus();
	make_attack_happen(rick, bud);
	lol.takeDamage(500);
	lol.whoAmI();
	lol.getStatus();
	lol = bud;
	lol.getStatus();
	lol.beRepaired(800);
	lol.getStatus();
	bud.whoAmI();
	bud.getStatus();
	ClapTrap *t = new FragTrap("dada");
	t->getStatus();
	delete t;
	
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;
}
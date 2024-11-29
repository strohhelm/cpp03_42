/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:12:21 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 16:12:27 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main (void)
{	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;

	ScavTrap lulatsch("Lulatsch");
	ScavTrap honk("Honk");
	ScavTrap honk_cpy(honk);
	ScavTrap stupid;
	ClapTrap troy("Troy");
	ClapTrap test(lulatsch);
	ScavTrap *s = new ScavTrap(honk);

	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;

	make_attack_happen(lulatsch, honk);
	make_attack_happen(honk, honk_cpy);
	make_attack_happen(stupid, troy);
	
	make_attack_happen(troy, honk);
	make_attack_happen(troy, test);
		
	stupid.guardGate();
	// clap.guardGate();
	std::cout<<std::endl;
	
	honk.takeDamage(100);
	make_attack_happen(honk, test);
	honk.guardGate();
	std::cout<<std::endl;
	
	honk.beRepaired(40);
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;
	delete s;
}
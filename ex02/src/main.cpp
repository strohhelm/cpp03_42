/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:02 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/26 20:35:15 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main (void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;
	ScavTrap lulatsch("Lulatsch");
	ScavTrap honk("Honk");
	ScavTrap honk_cpy(honk);
	ClapTrap clap("Troy");
	FragTrap rando;
	FragTrap frank("Frank");
	FragTrap frank2(frank);

	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;
	make_attack_happen(frank, honk);
	make_attack_happen(honk, frank2);
	make_attack_happen(honk, clap);
	make_attack_happen(frank, frank2);
	make_attack_happen(honk, clap);
	make_attack_happen(honk, lulatsch);
	make_attack_happen(honk, lulatsch);
	make_attack_happen(honk, lulatsch);
	make_attack_happen(honk, lulatsch);
	make_attack_happen(honk, frank2);
	make_attack_happen(honk, frank2);
	make_attack_happen(honk, frank2);
	make_attack_happen(honk, honk_cpy);
	make_attack_happen(honk, honk_cpy);
	make_attack_happen(honk, honk_cpy);
	make_attack_happen(honk, honk_cpy);
	make_attack_happen(honk, honk_cpy);
	make_attack_happen(honk, honk_cpy);
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	honk.attack("nothing");
	frank.highFiveGuys();
	frank.highFiveGuys();
	rando.highFiveGuys();
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:48:09 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/26 20:24:58 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;
	ClapTrap herbert("Herbert");
	ClapTrap mirko("Mirko");

	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;
	make_attack_happen(herbert, mirko);
	mirko.beRepaired(50);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	make_attack_happen(mirko, herbert);
	mirko.takeDamage(50);
	mirko.takeDamage(50);
	std::cout<<std::endl;
	make_attack_happen(herbert, mirko);
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;

}
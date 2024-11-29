/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 12:48:09 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 16:09:34 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------\n"<<X<<std::endl;
	ClapTrap herbert("Herbert");
	ClapTrap mirko("Mirko");
	ClapTrap *f = new ClapTrap(mirko);
	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;
	make_attack_happen(herbert, mirko);
	mirko.getStatus();
	mirko.beRepaired(50);
	mirko.getStatus();
	herbert.getStatus();
	std::cout<<R<<"\n\n--------------------------------------------------\n"<<X<<std::endl;

	for (int i = 0; i < 10; i++)
	{
	make_attack_happen(mirko, herbert);
	mirko.getStatus();
	herbert.getStatus();
	}
	std::cout<<R<<"\n\n--------------------------------------------------\n"<<X<<std::endl;
	
	mirko.takeDamage(50);
	mirko.getStatus();
	herbert.getStatus();
	mirko.takeDamage(50);
	mirko.getStatus();
	herbert.getStatus();
	std::cout<<std::endl;
	make_attack_happen(herbert, mirko);
	mirko.getStatus();
	herbert.getStatus();
	
	f->getStatus();
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------\n"<<X<<std::endl;
	delete f;
}
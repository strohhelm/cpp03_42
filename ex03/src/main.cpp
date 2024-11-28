/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:02 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 11:44:24 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main (void)
{
	std::cout<<R<<"\n-------------CONSTRUCTORS:----------------------"<<X<<std::endl;
	DiamondTrap lol;

	lol.whoAmI();
	lol.get_status();
	lol.attack("someone");
	std::cout<<R<<"\n-------------FUNCTION TESTS:----------------------\n"<<X<<std::endl;
	
	std::cout<<R<<"\n\n-------------DESTRUCTORS:----------------------"<<X<<std::endl;
}
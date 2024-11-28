/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:06:37 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 18:06:22 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
DiamondTrap::DiamondTrap(void) : ClapTrap("<default>_clap_name", 100, 50, 30), ScavTrap(), FragTrap()
{
	this->_name = "<default>";
	std::cout<<D<<"DiamondTrap default constructor called!\n"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", 100, 50, 30), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	this->_name = name;
	std::cout	<<D<<"DiamondTrap name setting constructor called: "
				<<G<<_name<<D
				<<" was constructed!\n"<<X
				<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout<<D<<"DiamondTrap copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
DiamondTrap::~DiamondTrap()
{
	std::cout	<<D<<"DiamondTrap default destructor called "
				<<G<<this->_name<<D
				<<" was destructed!"<<X
				<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	if (this != &original)
	{
		ClapTrap::operator=(original);
		this->_name = original._name;
	}
	std::cout<<D<<"DiamondTrap Copy assignment operator called!\n"<<X<<std::endl;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */


void DiamondTrap::whoAmI(void)
{
	std::cout	<<D<<"Hi! I am a cruel ugly mix of inbread classes.\nMy Names are:\nDiamondTrap Name: "
				<<G<<this->_name<<D
				<<"\nClapTrap Name: "
				<<G<<this->getName()<<D
				<<" Damn my Parents!\n"<<X
				<<std::endl;
}

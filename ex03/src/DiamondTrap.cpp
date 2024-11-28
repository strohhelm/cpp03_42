/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:06:37 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 12:02:13 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
DiamondTrap::DiamondTrap(void) : ClapTrap(("<default>_clap_name")), ScavTrap(), FragTrap()
{
	this->_gate_keeper_mode = false;
	this->_health_points = 100;
	this->_attack_damage = 30;
	this->_energy_points = 50;
	this->_name = "<default>";
	std::cout<<"DiamondTrap default constructor called!\n"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), ScavTrap(), FragTrap(name + "_clap_name")
{
	this->_gate_keeper_mode = false;
	this->_health_points = 100;
	this->_attack_damage = 30;
	this->_energy_points = 50;
	this->_name = name;
	std::cout	<<"DiamondTrap name setting constructor called: "
				<<G<<_name<<X
				<<" was constructed!\n"
				<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout<<"DiamondTrap copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
DiamondTrap::~DiamondTrap()
{
	std::cout	<<"DiamondTrap default destructor called "
				<<G<<this->_name<<X
				<<" was destructed!"
				<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	std::cout<<"DiamondTrap Copy assignment operator called"<<X<<std::endl;
	this->_name = original._name;
	this->_gate_keeper_mode = original._gate_keeper_mode;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */


void DiamondTrap::whoAmI(void)
{
	std::cout	<<"Hi! I am a cruel ugly mix of inbread classes.\nMy Names are:\n"
				<<G<<this->_name
				<<"\n"
				<<this->getName()<<X
				<<" Damn my Parents!\n"
				<<std::endl;
}
std::string DiamondTrap::getDiamondName(void)
{
	return (this->_name);
}



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
DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	this->_gate_keeper_mode = false;
	this->_health_points = 100;
	this->_attack_damage = 30;
	this->_energy_points = 50;
	this->_name = "<default>";
	std::cout<<L<<"DiamondTrap default constructor called!\n"<<X<<std::endl;
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
	std::cout	<<L<<"DiamondTrap name setting constructor called: "
				<<G<<_name<<L
				<<" was constructed!\n"
				<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout<<L<<"DiamondTrap copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
DiamondTrap::~DiamondTrap()
{
	std::cout	<<L<<"DiamondTrap default destructor called "
				<<G<<this->_name<<L
				<<" was destructed!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	std::cout<<L<<"DiamondTrap Copy assignment operator called"<<X<<std::endl;
	this->_name = original._name;

	this->_gate_keeper_mode = original._gate_keeper_mode;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */




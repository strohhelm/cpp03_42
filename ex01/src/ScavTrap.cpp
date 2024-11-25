/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:47:56 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/25 17:22:58 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ScavTrap::ScavTrap()
	: ClapTrap(nullptr, 100, 50, 20)
{
	_name = "hallo";
	std::cout<<"ScavTrap default constructor called!"<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
ScavTrap::ScavTrap(std::string name)
	:_name(name), _health_points(100), _energy_points(50), _attack_damage(20)
{
	std::cout	<<"ScavTrap name setting constructor called: "
				<<Y<<name<<X
				<<" was constructed!"
				<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& original)
{
	*this = original;
	std::cout<<"Copy constructor called"<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
ClapTrap::~ClapTrap()
{
	std::cout<<"Default destructor called"<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	this->_energy_points = original._energy_points;
	this->_health_points = original._health_points;
	this->_attack_damage = original._attack_damage;
	std::cout<<"Copy assignment operator called"<<std::endl;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

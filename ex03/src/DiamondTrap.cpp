/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:06:37 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/27 18:21:37 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
DiamondTrap::DiamondTrap(void)
{
	this->_gate_keeper_mode = false;
	std::cout<<L<<"DiamondTrap default constructor called!\n"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
DiamondTrap::DiamondTrap(std::string name)
{
	this->_gate_keeper_mode = false;
	std::cout	<<L<<"DiamondTrap name setting constructor called: "
				<<G<<name<<L
				<<" was constructed!\n"
				<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& original)
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




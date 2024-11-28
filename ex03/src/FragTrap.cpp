/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:47 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 17:48:01 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"


/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
FragTrap::FragTrap() : ClapTrap("<unnamed>", 100, 100, 30)
{
	std::cout<<L<<"FragTrap default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout	<<L<<"FragTrap name setting constructor called: "
				<<G<<name<<L
				<<" was constructed!"
				<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
FragTrap::FragTrap(const FragTrap& original) : ClapTrap()
{
	std::cout<<L<<"FragTrap copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
FragTrap::~FragTrap()
{
	std::cout	<<L<<"FragTrap default destructor called "
				<<G<<this->_name<<L
				<<" was destructed!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

FragTrap& FragTrap::operator=(const FragTrap& original)
{
	std::cout<<L<<"FragTrap Copy assignment operator called"<<X<<std::endl;
	this->_name = original._name;
	this->_energy_points = original._energy_points;
	this->_health_points = original._health_points;
	this->_attack_damage = original._attack_damage;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	FragTrap::highFiveGuys(void)
{
	std::cout	<<L<<"Hey Guys! I'm "
				<<G<<this->_name<<L
				<<" let's high five!\n"
				<<X<<std::endl;
}

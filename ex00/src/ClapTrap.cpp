/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@42.heilbronn.de>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-24 14:36:54 by pstrohal          #+#    #+#             */
/*   Updated: 2024-11-24 14:36:54 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ClapTrap::ClapTrap()
	:name(nullptr), health_points(10), energy_points(10), attack_damage(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
ClapTrap::ClapTrap(std::string name)
	:name(name), health_points(10), energy_points(10), attack_damage(0)
{
	std::cout<<"Name setting constructor called"<<std::endl;
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

ClapTrap& operator=(ClapTrap& orig)
{
	*this = orig;
	std::cout<<"Copy assignment operator called"<<std<<endl;
	return this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */


void	ClapTrap::attack(const std::string& target);
{
	if (this->health_points > 0){
		std::cout	<<"ClapTrap "
					<<this->name
					<<"attacks "
					<<target
					<<" and causes "
					<<this->attack_points
					<<" of damage!"
					<<std::endl;
	}
	else {
		std::cout	<<"ClapTrap "
					<<this->name
					<<"cant attack, it is out of healt points!"
					<<std::endl;
	}
}
/*----------------------------------------------------------------------------*/


void	ClapTrap::takeDamage(unsigned int amount);
{
	if (amount > this->health_points){
		this->health_points -= amount;
		std::cout	<< this->name
					<<"takes "
					<<amount
					<<" damage points!"
					<<std::endl;

	}
	else {
		this->health_points = 0;
		std::cout	<< this->name
					<<"takes "
					<<this->health_points
					<<" damage points! It is now out of health!"
					<<std::endl;
	}
}
/*----------------------------------------------------------------------------*/


void	ClapTrap::beRepaired(unsigned int amount);
{
	this->health_points += amount;
	std::cout	<<this->name
				<<"'s health points were increased by"
				<<amount
				<<"points!"
				<<std::endl;
}
/*----------------------------------------------------------------------------*/



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:18:47 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/26 19:11:03 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"


/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
FragTrap::FragTrap() : ClapTrap("<unnamed>", 100, 100, 30)
{
	std::cout<<C<<"FragTrap default constructor called!\n"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout	<<C<<"FragTrap name setting constructor called: "
				<<G<<name<<C
				<<" was constructed!\n"
				<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
FragTrap::FragTrap(const FragTrap& original) : ClapTrap()
{
	std::cout<<C<<"FragTrap copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
FragTrap::~FragTrap()
{
	std::cout	<<C<<"FragTrap default destructor called "
				<<G<<this->_name<<C
				<<" was destructed!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

FragTrap& FragTrap::operator=(const FragTrap& original)
{
	std::cout<<C<<"FragTrap Copy assignment operator called"<<X<<std::endl;
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
	std::cout	<<C<<"Hey Guys i'm "
				<<G<<this->_name<<C
				<<" let's high five!"
				<<X<<std::endl;
}

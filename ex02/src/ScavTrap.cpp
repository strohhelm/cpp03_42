/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:47:56 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/26 20:35:49 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ScavTrap::ScavTrap() : ClapTrap("<unnamed>", 100, 50, 20)
{
	this->_gate_keeper_mode = false;
	std::cout<<M<<"ScavTrap default constructor called!\n"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Initializing constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	this->_gate_keeper_mode = false;
	std::cout	<<M<<"ScavTrap name setting constructor called: "
				<<G<<name<<M
				<<" was constructed!\n"
				<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& original)
{
	std::cout<<M<<"ScavTrap copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
ScavTrap::~ScavTrap()
{
	std::cout	<<M<<"ScavTrap default destructor called "
				<<G<<this->_name<<M
				<<" was destructed!"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	std::cout<<M<<"ScavTrap Copy assignment operator called"<<X<<std::endl;
	this->_name = original._name;
	this->_energy_points = original._energy_points;
	this->_health_points = original._health_points;
	this->_attack_damage = original._attack_damage;
	this->_gate_keeper_mode = original._gate_keeper_mode;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	ScavTrap::attack(const std::string& target)
{
	if (!(this->_health_points > 0)){
		std::cout	<<M<<"ScavTrap "
					<<G<<this->_name<<M
					<<" cannot attack, it is dead as can be!"
					<<X<<std::endl;
	}
	else if (this->_energy_points > 0){
		std::cout	<<M<<"OMG! ScavTrap "
					<<G<<this->_name<<M
					<<" attacks "
					<<G<<target<<M
					<<" causing "
					<<B<<this->_attack_damage<<M
					<<" points of damage! Incredible!"
					<<X<<std::endl;
		this->_energy_points--;
	}
	else {
		std::cout	<<M<<"Too bad! ScavTrap "
					<<G<<this->_name<<M
					<<" cant attack, it is out of energy points!"
					<<X<<std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	this->_gate_keeper_mode = true;
	std::cout	<<M<<"ScavTrap "
				<<G<<this->_name<<M
				" is now in GateKeeper mode!"
				<<X<<std::endl;
}

void make_attack_happen(ScavTrap& attacker, ClapTrap &target)
{
	unsigned int ep = attacker.getEnergyPoints();
	unsigned int hp = attacker.getHealthPoints();
	attacker.attack(target.getName());
	if (hp > 0 && ep > 0)
		target.takeDamage(attacker.getAttackDamage());
	else
		target.takeDamage(0);
	std::cout<<std::endl;
}
void make_attack_happen(ScavTrap& attacker, ScavTrap &target)
{
	unsigned int ep = attacker.getEnergyPoints();
	unsigned int hp = attacker.getHealthPoints();
	attacker.attack(target.getName());
	if (hp > 0 && ep > 0)
		target.takeDamage(attacker.getAttackDamage());
	else
		target.takeDamage(0);
	std::cout<<std::endl;
}
void make_attack_happen(ClapTrap& attacker, ScavTrap &target)
{
	unsigned int ep = attacker.getEnergyPoints();
	unsigned int hp = attacker.getHealthPoints();
	attacker.attack(target.getName());
	if (hp > 0 && ep > 0)
		target.takeDamage(attacker.getAttackDamage());
	else
		target.takeDamage(0);
	std::cout<<std::endl;
}


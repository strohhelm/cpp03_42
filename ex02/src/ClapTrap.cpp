/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:36:54 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/29 16:05:20 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
ClapTrap::ClapTrap()
	:_name("<unnamed>"), _health_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout<<Y<<"ClapTrap default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/

// String initializing constructor
ClapTrap::ClapTrap(std::string name)
	:_name(name), _health_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout	<<Y<<"ClapTrap name setting constructor called: "
				<<G<<name<<Y
				<<" was constructed!"<<X
				<<std::endl;
}
/*----------------------------------------------------------------------------*/

//all values initializing constructor
ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int ep, unsigned int ap)
	:_name(name), _health_points(hp), _energy_points(ep), _attack_damage(ap)
{
	std::cout	<<Y<<"ClapTrap all values setting constructor called: "
				<<G<<name<<Y
				<<" was constructed!"<<X
				<<std::endl;
}
// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout<<Y<<"ClapTrap Copy constructor called"<<std::endl<<X;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
ClapTrap::~ClapTrap()
{
	std::cout	<<Y<<"ClapTrap default destructor called "
				<<G<<this->_name<<Y
				<<" was destructed!\n"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	this->_name = original._name;
	this->_energy_points = original._energy_points;
	this->_health_points = original._health_points;
	this->_attack_damage = original._attack_damage;
	std::cout<<Y<<"ClapTrap copy assignment operator called"<<X<<std::endl;
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */


void	ClapTrap::attack(const std::string& target)
{
	if (!(this->_health_points > 0)){
		std::cout	<<Y<<"ClapTrap "
					<<R<<this->_name<<Y
					<<" cant attack, it is dead!"
					<<X<<std::endl;
	}
	else if (this->_energy_points > 0 && this->_health_points > 0){
		std::cout	<<Y<<"ClapTrap "
					<<G<<this->_name<<Y
					<<" attacks "
					<<G<<target<<Y
					<<" causing "
					<<B<<this->_attack_damage<<Y
					<<" points of damage!"
					<<X<<std::endl;
		this->_energy_points--;
	}
	else {
		std::cout	<<Y<<"ClapTrap "
					<<R<<this->_name<<Y
					<<" cant attack, it is out of energy points!"
					<<X<<std::endl;
	}
}
/*----------------------------------------------------------------------------*/


void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->_health_points){
		this->_health_points -= amount;
		std::cout	<< G<<this->_name<<Y
					<<" takes "
					<<B<<amount<<Y
					<<" damage points!"
					<<X<<std::endl;

	}
	else if (this->_health_points > 0){
		std::cout	<<G<< this->_name<<Y
					<<" takes "
					<<B<<this->_health_points<<Y
					<<" damage points! It is now out of health!"
					<<X<<std::endl;
		this->_health_points = 0;
	}
	else {
		std::cout	<<R<< this->_name<<Y
					<<" cannot take more damage, it is already dead!"
					<<X<<std::endl;
	}
}
/*----------------------------------------------------------------------------*/


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_health_points <= 0){
		std::cout	<<Y<<"ClapTrap "
					<<R<<this->_name<<Y
					<<" cant be repaired, it is dead!"
					<<X<<std::endl;
		
	}
	else if (this->_energy_points > 0){
		this->_health_points += amount;
		this->_energy_points --;
		std::cout	<<G<<this->_name<<Y
				<<"'s health points were increased by "
				<<B<<amount<<Y
				<<" points!"
				<<X<<std::endl;
	}
	else {
		std::cout	<<R<<this->_name<<Y
					<<" cannot be repaired, it does not have enough energy points left!"
					<<std::endl;
	}
	
}
/*----------------------------------------------------------------------------*/

std::string ClapTrap::getName(void)
{
	return(this->_name);
}
/*----------------------------------------------------------------------------*/

int ClapTrap::getAttackDamage(void)
{
	return (this->_attack_damage);
}
/*----------------------------------------------------------------------------*/

int ClapTrap::getHealthPoints(void)
{
	return (this->_health_points);
}
/*----------------------------------------------------------------------------*/

int ClapTrap::getEnergyPoints(void)
{
	return (this->_energy_points);
}
/*----------------------------------------------------------------------------*/

void	ClapTrap::getStatus(void)
{
	std::cout	<<Y<<"ClapTrap "
				<< G<<this->_name<<Y
				<<" Status: HP:"
				<<B<<this->_health_points<<Y
				<<" EP:"<<B<<this->_energy_points<<Y
				<<" AD:"<<B<<this->_attack_damage<<X
				<<"\n"<<std::endl;
}

/* ************************************************************************** */
/*			OTHER FUNCTIONS												  */
/* ************************************************************************** */

void make_attack_happen(ClapTrap& attacker, ClapTrap &target)
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
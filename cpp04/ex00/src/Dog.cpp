/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@42.heilbronn.de>        #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-11-28 22:01:15 by pstrohal          #+#    #+#             */
/*   Updated: 2024-11-28 22:01:15 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout<<O<<"Dog default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Copy constructor
Dog::Dog(const Dog& original) : Animal()
{
	std::cout<<O<<"Dog copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Dog::~Dog()
{
	std::cout	<<O<<"Dog default destructor called"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Dog& Dog::operator=(const Dog& original)
{
	std::cout<<O<<"Dog Copy assignment operator called"<<X<<std::endl;
	if (this != &original)
	{
		Animal::operator=(original);
	}
	return *this;
}


/* ************************************************************************** */
/*			MEMBER FUNCTIONS												  */
/* ************************************************************************** */

void	makeSound(void)
{

	std::cout	<<O<<"Woof Woof WOOOF WOOOF WOFF Wof woff"
				<<X<<std::endl;
}

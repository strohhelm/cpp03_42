/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pstrohal <pstrohal@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 16:47:56 by pstrohal          #+#    #+#             */
/*   Updated: 2024/11/28 17:57:17 by pstrohal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

/* ************************************************************************** */
/*		CONSTRUCTORS, DESTRUCTORS											  */
/* ************************************************************************** */

//Default constructor
Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout<<M<<"Cat default constructor called!"<<X<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Copy constructor
Cat::Cat(const Cat& original) : Animal()
{
	std::cout<<M<<"Cat copy constructor called"<<X<<std::endl;
	*this = original;
	std::cout<<std::endl;
}
/*----------------------------------------------------------------------------*/


// Default destructor
Cat::~Cat()
{
	std::cout	<<M<<"Cat default destructor called"
				<<X<<std::endl;
}


/* ************************************************************************** */
/*		OPERATOR OVERLOADS													  */
/* ************************************************************************** */

Cat& Cat::operator=(const Cat& original)
{
	std::cout<<M<<"Cat Copy assignment operator called"<<X<<std::endl;
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

	std::cout	<<M<<"Meooooow! Meeeeooww!"
				<<X<<std::endl;
}
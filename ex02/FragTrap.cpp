/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:48:10 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:42:08 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	std::cout << "Default constructor called. FragTrap made from Claptrap" << std::endl;
};

FragTrap::FragTrap(std::string const newName): ClapTrap(newName)
{
	this->HP = 100;
	this->EP = 100;
	this->AD = 30;
	std::cout << "Parametized constructor called. FragTrap " << this->name << " created" << std::endl;
};

FragTrap::FragTrap(FragTrap &copy): ClapTrap(copy)
{
	this->HP = copy.HP;
	this->EP = copy.EP;
	this->AD = copy.AD;
	std::cout << "Copy constructor called. FragTrap copy of " << copy.name << std::endl;
};

FragTrap &FragTrap::operator=(FragTrap &copy)
{
	std::cout << "Operator constructor called. FragTrap copy of " << copy.name << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
};

FragTrap::~FragTrap()
{
	std::cout << "Destructor called. FragTrap " << this->name << " destroyed" << std::endl; 
};

////

void FragTrap::highFiveGuys(void)
{
	if (this->HP > 0)
		std::cout << "High five!" << std::endl;
	else
		std::cout << "Even laying on the floor, " << this->name << " still raises its hand, calling for a high five.." << std::endl;
};
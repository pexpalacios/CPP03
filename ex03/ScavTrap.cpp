/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:10:45 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:22:34 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	gateKeeperMode = false;
	std::cout << "Default constructor called. ScavTrap made from Claptrap" << std::endl;
};

ScavTrap::ScavTrap(std::string const newName): ClapTrap(newName)
{
	this->HP = 100;
	this->EP = 50;
	this->AD = 20;
	gateKeeperMode = false;
	std::cout << "Parametized constructor called. ScavTrap " << this->name << " created" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called. ScavTrap copy of " << copy.name << " created" << std::endl;
};

ScavTrap &ScavTrap::operator=(ScavTrap &copy)
{
	std::cout << "Operator constructor called. ScavTrap copy of " << copy.name << " created" << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
};

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called. ScavTrap " << this->name << " destroyed" << std::endl;
};

///

void ScavTrap::attack(const std::string& target)
{
	if (this->EP > 0)
	{
		std::cout << this->name << " shoots " << target << "" << std::endl;
		this->EP--;
		std::cout << this->name << " remaining EP: " << this->EP << std::endl;
		std::cout << target << " recibes damage!" << std::endl;
	}	
};

void ScavTrap::guardGate()
{
	if (this->HP > 0)
	{
		if (gateKeeperMode == 0)
		{
			std::cout << this->name << " is now on gate keeper mode" << std::endl;
			gateKeeperMode = true;
		}
		else
		{
			std::cout << this->name << " gets off of gate keeper mode" << std::endl;
			gateKeeperMode = false;
		}	
	}
	else
			std::cout << "A dead ScavTrap cannot guard anything" << std::endl;
};
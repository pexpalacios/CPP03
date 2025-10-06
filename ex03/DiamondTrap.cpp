/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:35:08 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 20:02:38 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name")
{
	this->name = "Deafult";
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
	std::cout << "Default constructor called. DiamondTrap created" << std::endl;
};

DiamondTrap::DiamondTrap(std::string const newName) : ClapTrap(newName + "_clap_name")
{
	this->name = newName;
	this->HP = FragTrap::HP;
	this->EP = ScavTrap::EP;
	this->AD = FragTrap::AD;
	std::cout << "Parametized constructor called. DiamondTrap " << this->name << " created" << std::endl;
};

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << "Copy constructor called. DiamondTrap copy of " << copy.name << std::endl;
};

DiamondTrap &DiamondTrap::operator=(DiamondTrap &copy)
{
	if (this != &copy)
	{
		this->name = copy.name + "_clap_name";
		this->HP = copy.HP;
		this->EP = copy.EP;
		this->AD = copy.AD;
	}
	std::cout << "Operator constructor called. DiamondTrap copy of " << copy.name << std::endl;
	return (*this);
};

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor called. DiamondTrap " << this->name << " destroyed" << std::endl;
};

////

void DiamondTrap::whoAmI()
{
	if (FragTrap::HP <= 0)
		std::cout << this->name << " is no one cause it's dead" << std::endl;
	else
		std::cout << "My name is " << this->name << " and my claptrap name is " << ClapTrap::name << std::endl;
};
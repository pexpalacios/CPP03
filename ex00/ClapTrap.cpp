/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:56:43 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 16:53:25 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name("Default"), HP(10), EP(10), AD(0)
{
	std::cout << "Default constructor called. Claptrap " << this->name << " created" << std::endl;
};

ClapTrap::ClapTrap(std::string newName): name(newName), HP(10), EP(10), AD(0)
{
	std::cout << "Constructor called. ClapTrap " << this->name << " created."  << std::endl;
};

ClapTrap::ClapTrap(ClapTrap &copy):
	name(copy.name), HP(copy.HP), EP(copy.EP), AD(copy.AD)
{
	std::cout << "Copy constructor called. ClapTrap, copy of " << this->name << " craeted." << std::endl;
};

ClapTrap &ClapTrap::operator=(ClapTrap &copy)
{
	std::cout << "Operator constructor called. Claptrap copy created." << std::endl;
	if(this != &copy)
	{
		this->name = copy.name;
		this->HP = copy.HP;
		this->EP = copy.EP;
		this->AD = copy.AD;
	}
	return (*this);
};

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called. ClapTrap " << this->name << " destroyed." << std::endl;
};

///

void ClapTrap::attack(const std::string& target)
{
	if (this->EP > 0)
	{
		std::cout << this->name << " attacks " << target << "!" << std::endl;
		this->EP--;
		std::cout << "EP: " << this->EP << std::endl;
		std::cout << target << " recibes damage! HP -1" << std::endl;
	}	
};

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->HP <= 0)
		std::cout << this->name << "'s dead already! You killed it!" << std::endl;
	else
	{
		this->HP = this->HP - amount;
		std::cout << this->name << " remaining HP: " << this->HP << std::endl;
		if(this->HP <= 0)
			std::cout << this->name << " is... dead now..." << std::endl;
	}	
};

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->EP > 0)
	{
		std::cout << this->name << " spends energy on repairing itself ";
		this->EP--;
		this->HP = this->HP + amount;
		std::cout << " EP: " << this->EP << " HP: " << this->HP << std::endl;
	}
	else
		std::cout << this->name << " has no energy to repair itself! Bye-bye!" << std::endl;
};
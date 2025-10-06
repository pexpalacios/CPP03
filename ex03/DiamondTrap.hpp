/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:25:07 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:42:30 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
		DiamondTrap(std::string newName);
		~DiamondTrap();
		DiamondTrap(DiamondTrap &copy);
		DiamondTrap &operator=(DiamondTrap &copy);		
		
		void whoAmI();
		void attack(std::string const &target);
};

#endif
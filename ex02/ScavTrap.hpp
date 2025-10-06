/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:10:32 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:25:56 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	private:
		bool gateKeeperMode;
	public:
		ScavTrap(void);
		ScavTrap(std::string const newName);
		~ScavTrap();
		ScavTrap(ScavTrap &copy);
		ScavTrap &operator=(ScavTrap &copy);
		
		void attack(const std::string& target);
		void guardGate();
};

#endif
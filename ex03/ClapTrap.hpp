/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:56:47 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:39:37 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int HP;
		int EP;
		int AD;
	public:
		ClapTrap(void);
		ClapTrap(std::string const newName);
		~ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap &operator=(ClapTrap &copy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName();
		int getHP();
		int getEP();
		int getAD();
};

#endif


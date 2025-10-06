/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 16:56:47 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 16:39:03 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int HP;
		int EP;
		int AD;
	public:
		ClapTrap();
		ClapTrap(std::string newName);
		~ClapTrap();
		ClapTrap(ClapTrap &copy);
		ClapTrap &operator=(ClapTrap &copy);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif


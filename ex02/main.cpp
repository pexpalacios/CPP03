/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:10:43 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:34:22 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "\033[34mScavTrap Constructing\033[0m" << std::endl;
	ScavTrap Scav("Scav");
	std::cout << Scav.getName() << " " << Scav.getHP() << " " << Scav.getEP() << " " << Scav.getAD() << std::endl;
	std::cout << "  " << std::endl;
	std::cout << "\033[34mFragTrap Constructing\033[0m" << std::endl;
	FragTrap Frag("Frag");
	std::cout << Frag.getName() << " " << Frag.getHP() << " " << Frag.getEP() << " " << Frag.getAD() << std::endl;
	std::cout << "  " << std::endl;
	std::cout << "\033[34mTests\033[0m" << std::endl;
	Scav.guardGate();
	Scav.attack("Frag");
	Frag.takeDamage(20);
	Scav.attack("Frag");
	Frag.takeDamage(20);
	Scav.attack("Frag");
	Frag.takeDamage(20);
	Frag.highFiveGuys();
	Scav.attack("Frag");
	Frag.takeDamage(20);
	Scav.attack("Frag");
	Frag.takeDamage(20);
	Scav.attack("Frag");
	Frag.takeDamage(20);
	Frag.highFiveGuys();
	std::cout << "  " << std::endl;
	std::cout << "\033[34mDestructors\033[0m" << std::endl;

	return (0);
}
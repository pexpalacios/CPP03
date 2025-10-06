/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:10:43 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 18:22:35 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "\033[34mFragTrap Constructing\033[0m" << std::endl;
	FragTrap Frag("Frag");
	std::cout << Frag.getName() << " " << Frag.getHP() << " " << Frag.getEP() << " " << Frag.getAD() << std::endl;
	std::cout << "  " << std::endl;
	std::cout << "\033[34mDiamondTrap Constructing\033[0m" << std::endl;
	DiamondTrap Dia("Dia");
	std::cout << Dia.getName() << " " << Dia.getHP() << " " << Dia.getEP() << " " << Dia.getAD() << std::endl;
	Dia.whoAmI();
	Frag.attack("Dia");
	Dia.takeDamage(30);
	Dia.beRepaired(2);
	Dia.attack("Frag");
	Frag.takeDamage(30);
	std::cout << "  " << std::endl;
	std::cout << "\033[34mDestructors\033[0m" << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:10:43 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 17:24:02 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "\033[34mClapTrap Constructing\033[0m" << std::endl;
	ClapTrap Clap("Clap");
	std::cout << Clap.getName() << " " << Clap.getHP() << " " << Clap.getEP() << " " << Clap.getAD() << std::endl;
	std::cout << "  " << std::endl;
	std::cout << "\033[34mScavTrap Constructing\033[0m" << std::endl;
	ScavTrap Scav("Scav");
	std::cout << Scav.getName() << " " << Scav.getHP() << " " << Scav.getEP() << " " << Scav.getAD() << std::endl;
	std::cout << "  " << std::endl;
	std::cout << "\033[34mTests\033[0m" << std::endl;
	Clap.attack("Scav");
	Scav.takeDamage(0);
	Scav.attack("Clap");
	Clap.takeDamage(20);
	Clap.takeDamage(30);
	Clap.beRepaired(1);
	Scav.guardGate();
	Scav.guardGate();
	std::cout << "  " << std::endl;
	std::cout << "\033[34mDestructors\033[0m" << std::endl;

	return (0);
}
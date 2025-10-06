/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:10:43 by penpalac          #+#    #+#             */
/*   Updated: 2025/10/06 16:50:26 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Claptrap("Mistake");
	ClapTrap C;

	Claptrap.attack("Default");
	C.takeDamage(2);
	C.beRepaired(1);
	C.attack("Mistake");
	Claptrap.takeDamage(10);
	C.attack("Mistake");
	Claptrap.takeDamage(2);

	return (0);
}
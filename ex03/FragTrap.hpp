/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: penpalac <penpalac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:46:09 by penpalac          #+#    #+#             */
/*   Updated: 2025/09/10 15:09:05 by penpalac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string const newName);
		~FragTrap();
		FragTrap(FragTrap &copy);
		FragTrap &operator=(FragTrap &copy);
		
		void highFiveGuys(void);
};

#endif
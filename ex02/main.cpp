/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:30:06 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 14:21:29 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap joel("Joel");
	std::string villager = "casual villager";

	joel.attack(villager);
	std::cout << villager + " retialates!" << std::endl;
	joel.takeDamage(5);
	for (int i = 0; i < 10; i++)
		joel.attack(villager);
	joel.takeEP(15);
	joel.beRepaired(15);
	joel.highFivesGuys();
	// joel.guardGate();
	// joel.guardGate();
	std::cout << villager + " retialates!" << std::endl;
	joel.takeDamage(100);
	joel.beRepaired(1);
	joel.highFivesGuys();
	// joel.guardGate();
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:28:03 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 13:30:29 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->dmg = 20;	
	guard = false;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap::ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->dmg = src.dmg;
}


ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & src)
{
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->dmg = src.dmg;

	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->isAlive())
	{
		if (!this->guard)
		{
			std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
			this->guard = !this->guard;
		}
		else
			std::cout << "ScavTrap is already in Gate keeper mode." << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
if (this->isAlive() == 0 || this->spendEp() == 0)
		return;
	this->hp += amount;
	if (this->hp > 100)
		this->hp = 100;
	std::cout << (this->name + " is repairing itself for ") << amount << " hit points. ";
	std::cout << "It's hp now is " << this->hp << std::endl;
}

void ScavTrap::takeEP(unsigned int amount)
{
	if (this->isAlive() == 0)
		return;
	this->ep += amount;
	if (this->ep > 50)
		this->ep = 50;
	std::cout << (this->name + " got ") << amount << " energy points. ";
	std::cout << "It's ep now is " << this->ep << std::endl;
}

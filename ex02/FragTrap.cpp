/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:57:12 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 14:21:19 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;	
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->dmg = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->dmg = src.dmg;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & src)
{
	this->name = src.name;
	this->dmg = src.dmg;
	this->hp = src.hp;
	this->ep = src.ep;

	return (*this);
}

void FragTrap::beRepaired(unsigned int amount)
{
if (this->isAlive() == 0 || this->spendEp() == 0)
		return;
	this->hp += amount;
	if (this->hp > 100)
		this->hp = 100;
	std::cout << (this->name + " is repairing itself for ") << amount << " hit points. ";
	std::cout << "It's hp now is " << this->hp << std::endl;
}

void FragTrap::takeEP(unsigned int amount)
{
	if (this->isAlive() == 0)
		return;
	this->ep += amount;
	if (this->ep > 100)
		this->ep = 100;
	std::cout << (this->name + " got ") << amount << " energy points. ";
	std::cout << "It's ep now is " << this->ep << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->isAlive())
		std::cout << "a positive high fives request )))))))))))))" << std::endl;
}

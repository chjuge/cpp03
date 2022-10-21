/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:34:29 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/21 12:55:09 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) 
: name(name), hp(10), ep(10), dmg(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->dmg = src.dmg;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & src)
{
	this->name = src.name;
	this->hp = src.hp;
	this->ep = src.ep;
	this->dmg = src.dmg;

	return (*this);
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->isAlive() == 0 || this->spendEp() == 0)
		return;
	std::cout << ("ClapTrap " + this->name + " attacks " + target + ", causing ") << this->dmg << " points of damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->isAlive() == 0)
		return;
	if (this->hp < amount)
		this->hp = 0;
	else
		this->hp -=amount;
	std::cout << this->name << " took " << amount << " of damage";
	std::cout << " and it's hp now is " << this->hp << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->isAlive() == 0 || this->spendEp() == 0)
		return;
	this->hp += amount;
	if (this->hp > 10)
		this->hp = 10;
	std::cout << (this->name + " is repairing itself for ") << amount << " hit points. ";
	std::cout << "It's hp now is " << this->hp << std::endl;
}

int ClapTrap::spendEp()
{
	if (this->ep != 0)
	{
		this->ep--;
		return (1);
	}
	std::cout << this->name << " doesnt have enough energy points for this activity" << std::endl;
	return (0);
}

int ClapTrap::isAlive()
{
	if (this->hp > 0)
		return (1);
	std::cout << "Oops! " << this->name << " is already completely dead. Good luck next time :)" << std::endl;
	return (0);
}

void  ClapTrap::takeEP(unsigned int amount)
{
	if (this->isAlive() == 0)
		return;
	this->ep += amount;
	if (this->ep > 10)
		this->ep = 10;
	std::cout << (this->name + " got ") << amount << " energy points. ";
	std::cout << "It's ep now is " << this->ep << std::endl;
}

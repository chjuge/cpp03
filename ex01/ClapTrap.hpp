/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:29:13 by mproveme          #+#    #+#             */
/*   Updated: 2022/11/04 14:54:36 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
protected:
	std::string		name;
	unsigned int	hp;
	unsigned int	ep;
	unsigned int 	dmg;
	bool			guard;
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap & operator =(ClapTrap const & src);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	int spendEp();
	int isAlive();
	virtual void takeEP(unsigned int amount);
};

#endif
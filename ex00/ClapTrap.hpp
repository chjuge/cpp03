/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mproveme <mproveme@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:29:13 by mproveme          #+#    #+#             */
/*   Updated: 2022/10/20 14:12:38 by mproveme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
private:
	std::string name;
	unsigned int hp;
	unsigned int ep;
	unsigned int dmg;
public:
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap();

	ClapTrap & operator =(ClapTrap const & src);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	int spendEp();
	int isAlive();
	void takeEP(unsigned int amount);
};

std::ostream & operator<<(std::ostream &stream, ClapTrap const &src);

#endif
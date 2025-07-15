/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:41:03 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/21 01:54:38 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed_clap_name"), ScavTrap(), FragTrap()
{
	_name = "Unnamed";
	std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	ScavTrap(name), FragTrap(name)
{
	_name = name;
	std::cout << "DiamondTrap " << _name << " constructed!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other),
	ScavTrap(other), FragTrap(other)
{
	_name = other._name;
	std::cout << "DiamondTrap " << _name << " copy constructed!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap " << _name << " assigned!" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout	<< "I am DiamondTrap " << _name << ", my ClapTrap name is "
				<< ClapTrap::_name << std::endl;
}
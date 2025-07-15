/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 14:32:05 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/21 01:16:47 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name), _hitPoints(other._hitPoints),
	_energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap " << _name << " copy constructed!" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "ClapTrap " << _name << " assigned!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout	<< "ClapTrap " << _name << " cannot act: no hit points or energy!"
					<< std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << _name << " attacks " << target << ", causing "
				<< _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout	<< "ClapTrap " << _name << " takes " << amount
				<< " points of damage! HP left " << _hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0 || _energyPoints <= 0)
	{
		std::cout << _name << " cannot act: no hit points or energy!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
	std::cout	<< "ClapTrap " << _name << " is repaired for " << amount
				<< " hit points! HP now: " << _hitPoints << std::endl;
}

/* int	ClapTrap::setEnergyPoints(const int &_energyPoints)
{
	this->_energyPoints = _energyPoints;
	return (_energyPoints);
} */

int	ClapTrap::getAttackDamage() const
{
	return (_attackDamage);
}
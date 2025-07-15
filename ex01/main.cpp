/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 17:21:37 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/20 17:24:50 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	scav("Serena");
	ScavTrap	scav2(scav);
	ScavTrap	scav3("Temp");

	scav.attack("Skeleton");
	scav.takeDamage(30);
	scav.beRepaired(20);
	scav.guardGate();

	scav.attack("Another Skeleton");

	scav3 = scav;
	scav3.guardGate();

	return (0);
}
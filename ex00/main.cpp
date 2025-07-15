/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 15:31:20 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/21 01:37:06 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap1("Hero of Kvatch");
	ClapTrap	clap2("Mehrunes Dagon");
	ClapTrap	clap3(clap1);
	ClapTrap	clap4("Sheogorath");

	clap1.attack("Mehrunes Dagon");
	clap2.takeDamage(clap1.getAttackDamage());

	clap1.beRepaired(5);

	clap3.attack("Mehrunes Dagon");

	clap4 = clap2;
	clap4.attack("Hero of Kvatch");

	//clap1.setEnergyPoints(0);
	clap1.attack("Mehrunes Dagon");

	return (0);
}
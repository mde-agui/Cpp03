/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:56:00 by mde-agui          #+#    #+#             */
/*   Updated: 2025/05/20 18:56:04 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	frag("Martin");

	frag.attack("the Adoring Fan");
	frag.takeDamage(40);
	frag.beRepaired(20);
	frag.highFiveGuys();

	FragTrap	frag2(frag);
	frag.highFiveGuys();
	
	FragTrap	frag3("Temp");
	frag3 = frag;
	frag3.highFiveGuys();

	return (0);
}
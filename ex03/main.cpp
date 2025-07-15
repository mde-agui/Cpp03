#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	diamond("Lydia");

	diamond.whoAmI();
	diamond.attack("Draugr");
	diamond.takeDamage(50);
	diamond.beRepaired(20);
	diamond.highFivesGuys();
	diamond.guardGate();

	DiamondTrap	diamond2(diamond);
	diamond2.whoAmI();

	DiamondTrap	diamond3("Temp");
	diamond3 = diamond;
	diamond3.whoAmI();

	return (0);
}
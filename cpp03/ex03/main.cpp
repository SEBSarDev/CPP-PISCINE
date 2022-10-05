#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Diamant");
	DiamondTrap zirconium("Zircon");

	std::cout << "Diamant's energy : " << diamond.getEnergy() << std::endl;
	std::cout << "Diamant's hp : " << diamond.getHitpoints() << std::endl;
	std::cout << "Diamant's attack dammage : " << diamond.getAttack() << std::endl;
	std::cout << "Zircon's energy : " << zirconium.getEnergy() << std::endl;
	std::cout << "Zircon's hp : " << zirconium.getHitpoints() << std::endl;
	std::cout << "Zircon's attack damage : " << zirconium.getAttack() << std::endl;
	diamond.attack("Zircon");
	zirconium.takeDamage(diamond.getAttack());
	zirconium.beRepaired(10);
	diamond.highFivesGuys();
	zirconium.whoAmI();
	diamond.guardGate();
	std::cout << "Diamant's energy : " << diamond.getEnergy() << std::endl;
	std::cout << "Zircon's energy : " << zirconium.getEnergy() << std::endl;
}

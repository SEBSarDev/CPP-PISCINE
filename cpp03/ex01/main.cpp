#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Arthur("Arthur");
	ScavTrap Guenievre("Guenievre");

	std::cout << "Arthur's energy : " << Arthur.getEnergy() << std::endl;
	std::cout << "Guenievre's energy : " << Guenievre.getEnergy() << std::endl;
	Arthur.attack("Guenievre");
	Guenievre.takeDamage(Arthur.getAttack());
	Arthur.guardGate();
	Guenievre.beRepaired(10);
	std::cout << "Arthur's energy : " << Arthur.getEnergy() << std::endl;
	std::cout << "Guenievre's energy : " << Guenievre.getEnergy() << std::endl;
}

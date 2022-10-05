#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap Yvain("Yvain");
	FragTrap Gauvain("Gauvain");

	std::cout << "Gauvain's energy : " << Gauvain.getEnergy() << std::endl;
	std::cout << "Yvain's energy : " << Yvain.getEnergy() << std::endl;
	Yvain.highFivesGuys();
	Gauvain.attack("Yvain");
	Yvain.takeDamage(Gauvain.getAttack());
	Yvain.attack("Gauvain");
	Gauvain.takeDamage(Yvain.getAttack());
	Yvain.beRepaired(15);
	std::cout << "Gauvain's energy : " << Gauvain.getEnergy() << std::endl;
	std::cout << "Yvain's energy : " << Yvain.getEnergy() << std::endl;
}

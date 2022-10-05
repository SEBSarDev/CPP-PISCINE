#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap James("James");
	ClapTrap Severus("Severus");

	std::cout << "James's energy : " << James.getEnergy() << std::endl;
	std::cout << "Severus's energy : " << Severus.getEnergy() << std::endl;
	James.attack("Severus");
	Severus.takeDamage(James.getAttack());
	Severus.attack("James");
	James.takeDamage(Severus.getAttack());
	Severus.beRepaired(10);
	std::cout << "James's energy : " << James.getEnergy() << std::endl;
	std::cout << "Severus's energy : " << Severus.getEnergy() << std::endl;
}

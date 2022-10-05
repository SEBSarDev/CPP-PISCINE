#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
	std::cout << "--- My tests ---" << std::endl;	
	IMateriaSource* srcs = new MateriaSource(); //creation materiau general
	ICharacter* moi = new Character("me");  // crea perso
	ICharacter* bobi = new Character("bobi"); // idem
	AMateria *ice1 = new Ice();           //crea materiau reel
	AMateria *ice2 = new Ice();
	AMateria *cure1 = new Cure();
	AMateria *cure2 = new Cure();
	AMateria *cure3 = new Cure();
	moi->equip(ice1);         // equipe de 4 materiaux, inventaire plein
	moi->equip(ice2);
	moi->equip(cure1);
	moi->equip(cure2);
	moi->equip(cure3);
	moi->use(2, *bobi);      // -->fonctionne (cure) ca vide la poche aussi
	moi->unequip(0);     //enleve le materiaux de la poche 0, peu plus utiliser
	moi->use(0, *bobi);  // -> fonction pas
	moi->equip(new Cure()); // rempli la poche 0 par Cure
	moi->equip(new Ice()); // rempli la poche 2 vide par ice
	moi->use(0, *bobi);  // ->fonctione (cure) et vide la poche
	moi->use(2, *bobi);  // ->fonctione (ice) et vide la poche
	AMateria *temp;     
	temp = srcs->createMateria("unknown");
	moi->unequip(0);
	moi->equip(temp);
	moi->use(0, *bobi); // ->fonctionne pas, type inconnu
	temp = srcs->createMateria("ice");
	moi->unequip(0);
	moi->equip(temp);
	moi->use(0, *bobi);   // ->fonctionne pas : materiaux pas encore appris
	temp = srcs->createMateria("cure");
	moi->unequip(0);
	moi->equip(temp);
	moi->use(0, *bobi);  // ->fonctionne pas : pas appris
	srcs->learnMateria(new Ice());
	srcs->learnMateria(new Cure());
	srcs->learnMateria(new Ice());
	srcs->learnMateria(new Cure());
	temp = srcs->createMateria("cure");
	moi->unequip(0);
	moi->equip(temp);
	moi->use(0, *bobi); // -> fonctionne (cure): appris
	temp = srcs->createMateria("ice");
	moi->unequip(0);
	moi->equip(temp);
	moi->use(0, *bobi);  // -> fonctionne (ice)
	temp = srcs->createMateria("unknown");
	moi->unequip(0);
	moi->equip(temp); 
	moi->use(0, *bobi);   // -> fonctionne pas, ,materiaux inconnu
	moi->unequip(3);
	moi->unequip(3);
	moi->use(3, *bobi);   // -> fonctionne pas, pas de materiaux en poche 3
	delete bobi;
	delete moi;
	delete srcs;

	std::cout << std::endl << std::endl << "--- subject main ---" << std::endl;	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;

}

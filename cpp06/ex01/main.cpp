#include "serialization.hpp"

int main(void)
{
	Data *infos = new Data;
	uintptr_t stock;
	Data *res;

	infos->str = "coucou";
	infos->a = 9;
	infos->b = 9.7f;
	infos->c = 4537.83;
	
	stock = serialize(infos);
	res = deserialize(stock);

	std::cout << "infos : " << std::endl; 
	std::cout << "addresse : " << infos << std::endl; 
	std::cout << "str = " << infos->str << std::endl; 
	std::cout << "a = " << infos->a << std::endl; 
	std::cout << "b = " << infos->b << std::endl; 
	std::cout << "c = " << infos->c << std::endl; 
	std::cout << std::endl;

	std::cout << "retour de serialize, qui a renvoyer la Data sous forme d'un entier : " << stock << std::endl;
	std::cout << std::endl; 

	std::cout << "retour de deserialize, qui retourne sous forme Data l'entier envoye : " << std::endl; 
	std::cout << "addresse : " << res << std::endl; 
	std::cout << "str = " << res->str << std::endl; 
	std::cout << "a = " << res->a << std::endl; 
	std::cout << "b = " << res->b << std::endl; 
	std::cout << "c = " << res->c << std::endl; 
	delete infos;
}

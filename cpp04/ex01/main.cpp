#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	std::cout << "--- Test leak array ---" << std::endl; 
	Animal *animal[4] = {new Cat(), new Cat(), new Dog(), new Dog()};
	for (int i = 0 ; i < 4; i++)
		delete animal[i];
	Animal *animal2[4];
	animal2[0] = new Cat();
	animal2[1] = new Dog();
	animal2[2] = new Dog();
	animal2[3] = new Cat();
	for (int i = 0 ; i < 4; i++)
		delete animal2[i];
	std::cout << std::endl << "--- Test deep copy ---" << std::endl; 
	Cat cat1;
	cat1.setIdeas("miam miam du pate pour chat", 0);
	cat1.setIdeas("miam miam des croquettes pour chat", 1);
	cat1.setIdeas("miam miam du poulet", 2);
	cat1.setIdeas("miam miam du poisson", 3);
	cat1.setIdeas("aaah dormir...", 4);
	cat1.setIdeas("aaah dormir...", 5);
	cat1.setIdeas("aaah dormir...", 6);
	cat1.setIdeas("aaah dormir...", 7);
	cat1.setIdeas("aaah dormir...", 8);
	cat1.setIdeas("aaah dormir...", 9);
	cat1.setIdeas("aaah dormir...", 10);
	for (int j = 11; j < 100; j++)
		cat1.setIdeas("MIAOUUUU", j);
	Cat cat2 = cat1;
	std::cout << cat2.getBrain().getIdea(0) << std::endl;
	std::cout << cat2.getBrain().getIdea(1) << std::endl;
	std::cout << cat2.getBrain().getIdea(2) << std::endl;
	std::cout << cat2.getBrain().getIdea(3) << std::endl;
	std::cout << cat2.getBrain().getIdea(4) << std::endl;
	std::cout << cat2.getBrain().getIdea(99) << std::endl;
	
}

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
		Dog dog;
		Cat cat;
		//AAnimal animal; //! -> can't call because it is an abstract class
		
		dog.makeSound();
		cat.makeSound();
}

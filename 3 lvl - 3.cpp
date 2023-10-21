/*
* Write an Animal class that has the following fields and methods:

name - a string field that stores the name of the animal
sound - a string field that stores the sound that the animal makes
Animal(name, sound) - class constructor that takes the name and sound of the animal and initialises the fields
makeSound() - a class method that displays the sound of the animal
Write a Dog class that inherits from the Animal class and has the following fields and methods:
breed - a string field that stores the breed of the dog
Dog(name, breed) - class constructor that takes the name and breed of the dog and initialises the fields, and calls the constructor of the base class Animal with the parameters name and "woof"
getBreed() - class method that returns the breed of the dog
*/

#include <iostream>
using namespace std;
class Animal {
public:
	Animal() {};

	Animal(string name, string sound) : _name(name), _sound(sound) {

	};

	void makeSound() {
		std::cout << _sound << '\n';
	}

	~Animal() {};

protected:
	string _name;
	string _sound;
};

class Dog : public Animal {
public:
	Dog(string name, string bread) {
		_name  = name;
		_bread = bread;
		_sound = "woof";
	}

	void getBreed() {
		std::cout << _bread << '\n';
	}
	~Dog() {};
private:
	string _bread;
};

int main() {
	Animal cat("Tom", "Meow!");
	cat.makeSound();

	Dog yara("yara","taksa");
	yara.makeSound();
	return 0;
}

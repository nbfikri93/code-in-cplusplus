// source: https://www.w3schools.com/cpp/cpp_inheritance.asp
// polimorphism concepts
// Polymorphism means "many forms", and it occurs when we have many classes that are 
// related to each other by inheritance.
// Polymorphism uses those methods to perform different tasks. This allows us to perform a 
// single action in different ways.

#include <iostream>
using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The cat says: meow meow \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}

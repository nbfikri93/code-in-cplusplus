// source: https://www.w3schools.com/cpp/cpp_inheritance.asp
// inheritance concepts
// inherit attributes and methods from one class to another
// It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

#include <iostream>
using namespace std;

// Base class
class Vehicle {
  protected:
    string german_brand = "BMW";
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
    string german_model = "7 series";

    string getBrand() {
      return german_brand ;
    }    
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model + "\n";
  cout << myCar.getBrand() + " " + myCar.german_model;
  return 0;
}

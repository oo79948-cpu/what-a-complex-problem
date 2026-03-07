#include <iostream>
#include "src/complex.hpp"

int main() {
  ComplexNumber numberOne = ComplexNumber(5.0, 7.0);
  ComplexNumber numberTwo = ComplexNumber(2.5, 3.1);

  ComplexNumber numberThree = numberOne.add(numberTwo);
  std::cout << numberThree.prettyPrint() << std::endl; // Returns 7.5 + 10.1i

  ComplexNumber numberFour = numberOne.subtract(numberTwo);
  std::cout << numberFour.prettyPrint() << std::endl; // Returns 2.5 + 3.9i

  float magnitude = numberOne.magnitude();
  std::cout << magnitude; // Returns 8.602325267
}

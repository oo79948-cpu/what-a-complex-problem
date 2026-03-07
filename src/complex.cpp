#include "complex.hpp"
#include <cmath>
#include <iostream>
#include <string>
#include <format>

ComplexNumber::ComplexNumber(float realPart, float imaginaryPart) {
   this->realPart = realPart;
   this->imaginaryPart = imaginaryPart;
}

ComplexNumber ComplexNumber::add (const ComplexNumber& cm) const {
   ComplexNumber newNumber (realPart + cm.realPart, imaginaryPart + cm.imaginaryPart);
   return newNumber;
}

ComplexNumber ComplexNumber::subtract (const ComplexNumber& cm) const {
   ComplexNumber newNumber (realPart - cm.realPart, imaginaryPart - cm.imaginaryPart);
   return newNumber;
}

ComplexNumber ComplexNumber::negate () const {
   ComplexNumber newNumber (-realPart, -imaginaryPart );
   return newNumber;
}

float ComplexNumber::magnitude () const {
   return std::sqrt(realPart * realPart + imaginaryPart * imaginaryPart);
}

ComplexNumber ComplexNumber::conjugate () const {
   ComplexNumber newNumber (realPart, -imaginaryPart);
   return newNumber;
}

float ComplexNumber::real () const {
   return realPart;
}
float ComplexNumber::imaginary () const {
   return imaginaryPart;
}

std::string ComplexNumber::prettyPrint() const {
 return std::format("{:.1f}", realPart)  + " + " + std::format("{:.1f}", imaginaryPart) + "i";
}

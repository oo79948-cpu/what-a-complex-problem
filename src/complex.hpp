#pragma once
#include <string>

class ComplexNumber {
    float realPart;
    float imaginaryPart;
public:
    ComplexNumber(float realPart = 0 , float imaginaryPart = 0);
    ComplexNumber add (const ComplexNumber& cm) const;
    ComplexNumber subtract (const ComplexNumber& cm) const;
    ComplexNumber negate () const;
    float magnitude () const;
    ComplexNumber conjugate () const;
    float real () const;
    float imaginary () const;
    std::string prettyPrint() const;
};

std::string complex();

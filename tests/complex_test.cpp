#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include "../src/complex.hpp"

TEST_CASE( "add returns -2.1 + 6.1i and does not change other numbers" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    ComplexNumber complex2 {1.2,3.4};
    ComplexNumber complex3 = complex1.add(complex2);
    REQUIRE( complex3.prettyPrint() == "-2.1 + 6.1i" );
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
    REQUIRE( complex2.prettyPrint() == "1.2 + 3.4i" );
}

TEST_CASE( "subtract returns -4.5 + -0.7i and does not change other numbers" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    ComplexNumber complex2 {1.2,3.4};
    ComplexNumber complex3 = complex1.subtract(complex2);
    REQUIRE( complex3.prettyPrint() == "-4.5 + -0.7i" );
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
    REQUIRE( complex2.prettyPrint() == "1.2 + 3.4i" );
}

TEST_CASE( "negate returns 3.3 + -2.7i and does not change other numbers" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    ComplexNumber complex2 = complex1.negate();
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
    REQUIRE( complex2.prettyPrint() == "3.3 + -2.7i" );
}

TEST_CASE( "magnitude returns 2.0 and does not change the complex number" ) {
    ComplexNumber complex1 = ComplexNumber(0, 2);
    float magnitude = complex1.magnitude();
    REQUIRE( complex1.prettyPrint() == "0.0 + 2.0i" );
    REQUIRE( magnitude == 2.0f );
}

TEST_CASE( "conjugate returns -3.3 + -2.7i and does not change the complex number" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    ComplexNumber complex2 = complex1.conjugate();
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
    REQUIRE( complex2.prettyPrint() == "-3.3 + -2.7i" );
}

TEST_CASE( "real returns -3.3 and does not change the complex number" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    float real = complex1.real();
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
    REQUIRE( real == -3.3f );
}

TEST_CASE( "imaginary returns 2.7 and does not change the complex number" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    float imaginary = complex1.imaginary();
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
    REQUIRE( imaginary == 2.7f );
}

TEST_CASE( "print returns the value of the complex number" ) {
    ComplexNumber complex1 = ComplexNumber(-3.3, 2.7);
    REQUIRE( complex1.prettyPrint() == "-3.3 + 2.7i" );
}

TEST_CASE( "print returns the phase of the complex number" ) {
    ComplexNumber complex1 = ComplexNumber(3, 4);
    REQUIRE( complex1.phase() == 0.927295208f );
}

TEST_CASE( "print returns the phase of the complex number with the real part being 0" ) {
    ComplexNumber complex1 = ComplexNumber(0, 4);
    REQUIRE( complex1.phase() == 1.570796371f );
}

TEST_CASE( "print returns the phase of the complex number with the imaginary part being 0" ) {
    ComplexNumber complex1 = ComplexNumber(3, 0);
    REQUIRE( complex1.phase() == 0 );
}

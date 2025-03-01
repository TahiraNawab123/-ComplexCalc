#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "complexCal.h"

TEST_CASE("Test Constructors and Getters") {
    Complex c1;
    REQUIRE(c1.getReal() == 0);
    REQUIRE(c1.getImaginary() == 0);

    Complex c2(3, 4);
    REQUIRE(c2.getReal() == 3);
    REQUIRE(c2.getImaginary() == 4);

    Complex c3(c2);
    REQUIRE(c3.getReal() == 3);
    REQUIRE(c3.getImaginary() == 4);
}

TEST_CASE("Test Setter Functions") {
    Complex c;
    c.setReal(5);
    c.setImaginary(6);
    REQUIRE(c.getReal() == 5);
    REQUIRE(c.getImaginary() == 6);
}

TEST_CASE("Test Addition Operator Overloading") {
    Complex c1(2, 3);
    Complex c2(1, 4);
    Complex result = c1 + c2;
    REQUIRE(result.getReal() == 3);
    REQUIRE(result.getImaginary() == 7);
}

TEST_CASE("Test Subtraction Operator Overloading") {
    Complex c1(5, 6);
    Complex c2(3, 2);
    Complex result = c1 - c2;
    REQUIRE(result.getReal() == 2);
    REQUIRE(result.getImaginary() == 4);
}

TEST_CASE("Test Multiplication Operator Overloading") {
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex result = c1 * c2;
    REQUIRE(result.getReal() == -5);
    REQUIRE(result.getImaginary() == 10);
}

TEST_CASE("Test Comparison Operators") {
    Complex c1(2, 3);
    Complex c2(2, 3);
    Complex c3(4, 5);
    REQUIRE(c1 == c2);
    REQUIRE_FALSE(c1 == c3);
    REQUIRE(c1 != c3);
}

TEST_CASE("Test Relational Operators") {
    Complex c1(1, 2);
    Complex c2(3, 4);
    REQUIRE(c1 < c2);
    REQUIRE_FALSE(c2 < c1);
    REQUIRE(c2 > c1);
}

TEST_CASE("Test Input and Output Operator Overloading") {
    std::stringstream ss;
    Complex c1(3, 4);
    ss << c1;
    REQUIRE(ss.str() == "3 + 4i");
}
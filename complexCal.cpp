#include<iostream>
#include "complexCal.h"
using namespace std;

Complex::Complex() : real(0), imaginary(0) {}
Complex::Complex(int r, int i) : real(r), imaginary(i) {}
Complex::Complex(const Complex &c) : real(c.real), imaginary(c.imaginary) {}
Complex::~Complex() {}

void Complex::setReal(int r) {
  real = r;
}
void Complex::setImaginary(int i) {
  imaginary = i;
}
int Complex::getReal() const {
  return real;
}
int Complex::getImaginary() const {
  return imaginary;
}

Complex Complex::operator+(const Complex &c) {
    return Complex(real + c.real, imaginary + c.imaginary);
}

Complex Complex::operator-(const Complex &c) {
    return Complex(real - c.real, imaginary - c.imaginary);
}

Complex Complex::operator*(const Complex &c) {
    return Complex(real * c.real - imaginary * c.imaginary, real * c.imaginary + imaginary * c.real);
}

bool Complex::operator==(const Complex &c) const {
    return (real == c.real) && (imaginary == c.imaginary);
}

bool Complex::operator!=(const Complex &c) const {
    return !(*this == c);
}

bool Complex::operator<(const Complex &c) const {
    return (real * real + imaginary * imaginary) < (c.real * c.real + c.imaginary * c.imaginary);
}

bool Complex::operator>(const Complex &c) const {
    return (real * real + imaginary * imaginary) > (c.real * c.real + c.imaginary * c.imaginary);
}

ostream &operator<<(ostream &out, const Complex &c) {
    out << c.real << " + " << c.imaginary << "i";
    return out;
}

istream &operator>>(istream &in, Complex &c) {
    cout << "Enter real and imaginary part: ";
    in >> c.real >> c.imaginary;
    return in;
}

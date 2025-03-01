#ifndef COMPLEXCAL_H
#define COMPLEXCAL_H
#include<iostream>
using namespace std;

class Complex {
private:
    int real;
    int imaginary;

public:
    Complex();
    Complex(int r, int i);
    Complex(const Complex &c);
    ~Complex();

    void setReal(int r);
    void setImaginary(int i);
    int getReal() const;
    int getImaginary() const;

    Complex operator+(const Complex &c);
    Complex operator-(const Complex &c);
    Complex operator*(const Complex &c);

    bool operator==(const Complex &c) const;
    bool operator!=(const Complex &c) const;
    bool operator<(const Complex &c) const;
    bool operator>(const Complex &c) const;

    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
};

#endif //COMPLEXCAL_H

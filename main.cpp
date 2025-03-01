#include<iostream>
#include "complexCal.h"
using namespace std;

int main(){
    Complex c1, c2;
    cin >> c1;
    cin >> c2;

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;

    cout << "Complex number 1: " << c1 << endl;
    cout << "Complex number 2: " << c2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;

    cout << "Equality: " << (c1 == c2 ? "Equal" : "Not Equal") << endl;
    cout << "Inequality: " << (c1 != c2 ? "Not Equal" : "Equal") << endl;
    cout << "Comparison (<): " << (c1 < c2 ? "c1 is smaller" : "c2 is smaller") << endl;
    cout << "Comparison (>): " << (c1 > c2 ? "c1 is greater" : "c2 is greater") << endl;

  return 0;
  }
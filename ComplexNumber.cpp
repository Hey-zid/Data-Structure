#include <bits/stdc++.h>
using namespace std;

// Structure for Complex Number
struct Complex {
    float real;
    float imaginary;
};

// Function for Addition
void Addition(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;

    cout << result.real << " + " << result.imaginary << "i";
}

// Function for Subtraction
void Subtraction(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;

    cout << result.real << " + " << result.imaginary << "i";
}

// Function for Multiplication
void Multiplication(Complex a, Complex b) {
    Complex result;
    result.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    result.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);

    cout << result.real << " + " << result.imaginary << "i";
}

// Function for Division
void Division(Complex a, Complex b) {
    Complex result;
    float denominator = (b.real * b.real) + (b.imaginary * b.imaginary);

    result.real =
        (a.real * b.real + a.imaginary * b.imaginary) / denominator;

    result.imaginary =
        (a.imaginary * b.real - a.real * b.imaginary) / denominator;

    cout << result.real << " + " << result.imaginary << "i";
}

int main() {
    Complex c1, c2;

    cout << "Enter first complex number:\n";
    cout << "Real part: ";
    cin >> c1.real;
    cout << "Imaginary part: ";
    cin >> c1.imaginary;

    cout << "\nEnter second complex number:\n";
    cout << "Real part: ";
    cin >> c2.real;
    cout << "Imaginary part: ";
    cin >> c2.imaginary;

    cout << "\nAddition: ";
    Addition(c1, c2);

    cout << "\nSubtraction: ";
    Subtraction(c1, c2);

    cout << "\nMultiplication: ";
    Multiplication(c1, c2);

    cout << "\nDivision: ";
    Division(c1, c2);

    return 0;
}

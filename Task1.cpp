#include <iostream>
using namespace std;
class Complex {
private:
    double real;  
    double imag;  

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}
    void display() const {
        cout << real;
        if (imag >= 0) cout << " + " << imag << "i";
        else cout << " - " << -imag << "i";
        cout << endl;
    }
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
                       real * other.imag + imag * other.real);
    }
    Complex operator/(const Complex& other) const {
        double denom = other.real * other.real + other.imag * other.imag;
        if (denom == 0) {
            cerr << "Division by zero error!" << std::endl;
            return Complex(); 
        }
        return Complex((real * other.real + imag * other.imag) / denom,
                       (imag * other.real - real * other.imag) / denom);
    }
};
int main() {
    Complex c1(4, 5);   
    Complex c2(2, 3); 
    Complex result = c1 + c2;
    cout << "Addition: ";
    result.display(); 
    result = c1 - c2;
    cout << "Subtraction: ";
    result.display(); 
    result = c1 * c2;
    cout << "Multiplication: ";
    result.display(); 
    result = c1 / c2;
    cout << "Division: ";
    result.display(); 
    return 0;
}
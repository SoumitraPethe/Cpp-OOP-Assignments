#include <iostream>

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    
    ComplexNumber(double r = 0, double i = 0) : real(r), imaginary(i) {}

    
    ComplexNumber(const ComplexNumber& other) : real(other.real), imaginary(other.imaginary) {}

    
    ComplexNumber operator+(const ComplexNumber& other) const {
        return ComplexNumber(real + other.real, imaginary + other.imaginary);
    }


    ComplexNumber operator-(const ComplexNumber& other) const {
        return ComplexNumber(real - other.real, imaginary - other.imaginary);
    }

    
    void display() const {
        std::cout << real << " + " << imaginary << "i";
    }
};

int main() {
    // Test the ComplexNumber class
    ComplexNumber c1(3, 2);
    ComplexNumber c2(1, 4);

    ComplexNumber sum = c1 + c2;
    ComplexNumber diff = c1 - c2;

    std::cout << "c1 = ";
    c1.display();
    std::cout << std::endl;

    std::cout << "c2 = ";
    c2.display();
    std::cout << std::endl;

    std::cout << "c1 + c2 = ";
    sum.display();
    std::cout << std::endl;

    std::cout << "c1 - c2 = ";
    diff.display();
    std::cout << std::endl;

    return 0;
}


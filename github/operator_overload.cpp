#include <iostream>

// Define the Complex class
class Complex {
private:
    double real; // Real part of the complex number
    double imag; // Imaginary part of the complex number

public:
    // Constructor that initializes the real and imaginary parts
    Complex(double r, double i) : real(r), imag(i) {}

    // Overload the + operator to add two Complex numbers
    // This function is defined outside the class but declared as a friend to allow access to private members
    friend Complex operator+(const Complex& c1, const Complex& c2) {
        //constant referances are more efficiant and correct. by using constant you ensure that you are only able to referance the c1 and c2 not chainge them.
        //and yes & can go next to the var name but im starting to actualy like TN& VAR
        // Add the real parts and the imaginary parts separately
        return Complex(c1.real + c2.real, c1.imag + c2.imag);
    }

    // Overload the << operator to print a Complex number
    // This function is also defined outside the class but declared as a friend
    friend std::ostream& operator<<(std::ostream& os, const Complex& c) {
        // Print the complex number in the form "real + imag*i"
        os << c.real << " + " << c.imag << "*i";
        return os;
    }
};

int main() {
    // Create two Complex objects
    Complex c1(3.0, 4.0);
    Complex c2(1.0,  2.0);
    
    // Add the two Complex objects using the overloaded + operator
    Complex c3 = c1 + c2;
    
    // Print the Complex objects using the overloaded << operator
    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c1 + c2 = c3: " << c3 << std::endl;

    return 0;
}
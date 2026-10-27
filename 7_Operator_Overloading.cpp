#include <iostream>
using namespace std;
class Complex
{
    int real, imag;
public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    // Unary operator overloading
    void operator++()
    {
        real++;
        imag++;
    }
    void operator--()
    {
        real--;
        imag--;
    }
    // Binary operator overloading
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }
    void display()
    {
        cout << real << " + (" << imag << ")i" << endl;
    }
};
int main()
{
    Complex c1(5, 4), c2(3, 2), c3, c4;
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    ++c1;
    cout << "\nAfter increment: ";
    c1.display();
    --c1;
    cout << "After decrement: ";
    c1.display();
    c3 = c1 + c2;
    cout << "\nAddition: ";
    c3.display();
    c4 = c1 - c2;
    cout << "Subtraction: ";
    c4.display();
    return 0;
}
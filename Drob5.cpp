#include <iostream>
using namespace std;

class Fraction 
{
    int numerator;  
    int denominator; 

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) 
    {
        if (denominator == 0) 
        {
            cout << "Error" << endl;
            denominator = 1;
        }
    }

    Fraction operator+(const Fraction& other) const 
    {
        int num = numerator * other.denominator + other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator-(const Fraction& other) const 
    {
        int num = numerator * other.denominator - other.numerator * denominator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator*(const Fraction& other) const 
    {
        int num = numerator * other.numerator;
        int denom = denominator * other.denominator;
        return Fraction(num, denom);
    }

    Fraction operator/(const Fraction& other) const 
    {
        int num = numerator * other.denominator;
        int denom = denominator * other.numerator;
        return Fraction(num, denom);
    }

    void display() const 
    {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(6, 2); 
    Fraction f2(10, 5); 

    Fraction result;

    result = f1 + f2;
    result.display();

    result = f1 - f2;
    result.display();

    result = f1 * f2;
    result.display();

    result = f1 / f2;
    result.display();
}
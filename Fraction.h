#include <iostream>
#ifndef FRACTION_H
#define FRACTION_H


class Fraction 
{

public:
    Fraction();
    Fraction (int num);
    Fraction (int num, int den);
    Fraction (const Fraction& other);
    Fraction& operator=( const Fraction& other);
    friend bool operator> (const Fraction& fra1, const Fraction& fra2);
    friend bool operator>= (const Fraction& fra1, const Fraction& fra2);
    friend Fraction operator+ (const Fraction& fra1, const Fraction& fra2);
    friend Fraction operator- (const Fraction& fra1, const Fraction& fra2);
    friend Fraction operator* (const Fraction& fra1, const Fraction& fra2);
    friend Fraction operator/(const Fraction& fra1, const Fraction& fra2);
    friend std::ostream& operator<< (std::ostream& os, const Fraction& f);
    friend bool operator== (const Fraction& fra1, const Fraction& fra2);
    friend bool operator!= (const Fraction& fra1, const Fraction& fra2);
    friend bool operator< (const Fraction& fra1, const Fraction& fra2);
    friend bool operator<= (const Fraction& fra1, const Fraction& fra2);
    
    Fraction operator-() const;
    Fraction& operator+= (const Fraction& other);
    Fraction& operator-= (const Fraction& other);
    Fraction& operator*= (const Fraction& other);
    Fraction& operator/= (const Fraction& other);
    Fraction& operator++ (); //prefix ++
    Fraction operator++ (int); //postfix ++
    int getNumerator() const;
    int getDenominator() const;
    void display() const;
    
    private:
    int num;
    int den;
    void normalize();
    int gcd(int a, int b) const;
};
#endif // FRACTION_H

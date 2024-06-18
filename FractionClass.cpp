

#include "Fraction.h"

Fraction::Fraction() : num(0), den(1) {}

Fraction::Fraction(int num) : num(num), den(1) {}

Fraction::Fraction(int num, int den) : num(num), den(den) 
{
    if (den == 0) {
        std::cerr << "Error!!! Denominator will never  be zero." << std::endl;
        exit(EXIT_FAILURE);
    }
    normalize();
}


Fraction::Fraction(const Fraction& other) 
{
num = other.num;
den = other.den;
}

Fraction& Fraction::operator=(const Fraction& other) 
{
if (this != &other) {
num = other.num;
den = other.den;
}
return *this;
}

std::ostream& operator<<(std::ostream& os, const Fraction& f) 
{
    os << f.num << "/" << f.den;
    return os;
}


bool operator==(const Fraction& fra1, const Fraction& fra2) 
{
if (fra1.num == fra2.num && fra1.den == fra2.den) 
  {
               return true;
  } 
else 
  {
               return false;
  }
}



bool operator<(const Fraction& fra1, const Fraction& fra2) {
    return fra1.num * fra2.den < fra2.num * fra1.den;
}

bool operator!=(const Fraction& fra1, const Fraction& fra2) 
{
if (fra1.num == fra2.num && fra1.den == fra2.den) 
{
            return false;
} 
 else 
{
            return true;
}
}

bool operator<=(const Fraction& fra1, const Fraction& fra2) {
if (fra2 < fra1) 
{
return false;
}
else {
return true;
}
}

bool operator>(const Fraction& fra1, const Fraction& fra2) 
{
    return fra2 < fra1;
}



bool operator>=(const Fraction& fra1, const Fraction& fra2) {
if (fra1 < fra2)
{
return false;
}
else
{
return true;
}
}


Fraction operator+(const Fraction& fra1, const Fraction& fra2) 
{
    //Fraction result(numer, denom);
    return Fraction(fra1.num * fra2.den + fra2.num * fra1.den, fra1.den * fra2.den);
}

Fraction operator-(const Fraction& fra1, const Fraction& fra2) 
{
    Fraction result(fra1.num * fra2.den - fra2.num * fra1.den , fra1.den * fra2.den);
    result.normalize();
    return result;
}

Fraction operator*(const Fraction& fra1, const Fraction& fra2) 
{
    return Fraction(fra1.num * fra2.num, fra1.den * fra2.den);
    
}




Fraction operator/(const Fraction& fra1, const Fraction& fra2) {
    if (fra2.num == 0) {
        throw std::invalid_argument("Cannot divide by zero.");
    }
    Fraction result(fra1.num * fra2.den, fra1.den * fra2.num);
    result.normalize();
    return result;
}


Fraction Fraction::operator-() const {
    Fraction result;
    result.num= -num;
    result.den= den;
    return result;
}



Fraction& Fraction::operator+=(const Fraction& other) {
//Fraction result;
num = num * other.den + other.num * den;
den = den * other.den;
normalize();
return *this;
}

Fraction& Fraction::operator-=(const Fraction& other) {
num = num * other.den - other.num * den;
den *= other.den;
normalize();
return *this;
}



Fraction& Fraction::operator*=(const Fraction& other) {
num = num * other.num;
den= den * other.den;
normalize();
return *this;
}


Fraction& Fraction::operator/=(const Fraction& other) {
    if (other.num == 0) {
        std::cerr << "Error!!! Cannot divide by zero." << std::endl;
        exit(EXIT_FAILURE);
    }
    num *= other.den;
    den *= other.num;
    Fraction& result = *this;
    result.normalize();
    return result;
}


Fraction& Fraction::operator++() {
    this->num += this->den;
    this->normalize();
    return *this;
}

Fraction Fraction::operator++(int) {
    Fraction temp(*this);
    *this += 1;
    return temp;
}


int Fraction::getNumerator() const {
return num;
}

int Fraction::getDenominator() const {
return den;
}

void Fraction::display() const {
std::cout << num << "/" << den<< std::endl;
}
void Fraction::normalize() {
    den == 0 ? throw std::invalid_argument("Denominator cannot be zero.") : 0;
    (den < 0) ? (num = -num, den = -den) : 0;
    int divisor = gcd(std::abs(num), den);
    (divisor > 1) ? (num /= divisor, den /= divisor) : 0;
}



int Fraction::gcd(int a, int b) const {
do {
int temp = b;
b = a % b;
a = temp;
} while (b != 0);
return a;
}

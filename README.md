# Fraction Class Implementation with Overloaded Operators
The Fraction class provides a robust implementation for handling fractions in C++. It supports basic arithmetic operations such as addition, subtraction, multiplication, and division, along with comparison operations and unary operators. This README provides an overview of the class, its features, usage examples, and additional details.

# Implementation
The Fraction class is implemented across two files:
- Fraction.h: Header file defining the class declaration, including constructors, overloaded operators, and member functions.
- Fraction.cpp: Implementation file containing the definitions of the Fraction class member functions and non-member overloaded operators.

# Key Features
## Constructors:
- Fraction(): Default constructor initializes fraction to 0/1.
- Fraction(int num): Initializes fraction with numerator num and denominator 1.
- Fraction(int num, int den): Initializes fraction with specified numerator and denominator, handling normalization and zero-denominator errors.
  
## Operators:
- Arithmetic Operators: +, -, *, /
- Comparison Operators: ==, !=, <, >, <=, >=
- Unary Operator: - (negation)
- Compound Assignment Operators: +=, -=, *=, /=
- Increment Operators: ++ (prefix and postfix)

## Utility Functions:
- getNumerator(): Retrieves the numerator of the fraction.
- getDenominator(): Retrieves the denominator of the fraction.
- display(): Outputs the fraction in the form "numerator/denominator".
- normalize(): Ensures the fraction is in its simplest form after any operation.
  
## Error Handling:
Checks for zero denominators during construction and division operations, throwing exceptions when encountered.

## Additional Features:
- Normalization: Automatically simplifies fractions to their lowest terms.
- Output Overloading: Allows fractions to be easily printed using std::cout.
- Exception Handling: Uses exceptions to handle invalid operations, such as division by zero.
- Comparison Operators: Enables straightforward comparison between fractions.


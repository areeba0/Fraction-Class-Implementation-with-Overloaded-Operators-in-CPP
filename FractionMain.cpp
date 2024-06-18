#include <iostream>
#include "Fraction.h"



int main() 
{
   

    Fraction fra1(3, 8);
    Fraction fra2(4, 1);
    Fraction fra3 = fra1 + fra2;
    Fraction fra4 = fra1 - fra2;
    Fraction fra5 = fra1 / fra2;
    Fraction fra6 = fra1 * fra2;
    std::cout<<"-------------------------------------------------------------------"<<std :: endl;

    std::cout << "fraction 1 is =  " << fra1 << std::endl;
    std::cout << "fraction 2 is : " << fra2 << std::endl;
    // post and pre increment 
    std::cout << "fraction1 is = " << fra1 << std::endl;
    std::cout << " fraction 1 ++fra1: " << ++fra1 << std::endl;
    std::cout << " fraction1 is fra1++: " << fra1++ << std::endl;
    
    std::cout << "f1 + f2: " << fra3 << std::endl;
    std::cout << "f1 - f2: " << fra4 << std::endl;
    std::cout << "f1 / f2: " << fra5 << std::endl;
    std::cout << "f1 * f2: " << fra6 << std::endl;

    std::cout << "f1 += f2: " << (fra1 += fra2) << std::endl;
    std::cout << "f1 -= f2: " << (fra1 -= fra2) << std::endl;
    std::cout << "f1 *= f2: " << (fra1 *= fra2) << std::endl;
    std::cout << "f1 /= f2: " << (fra1 /= fra2) << std::endl;

   
  

    std::cout << "-f1: " << -fra1 << std::endl;
    std::cout << "f1 == f2: " << (fra1 == fra2) << std::endl;
    std::cout << "f1 != f2: " << (fra1 != fra2) << std::endl;
    std::cout << "f1 < f2: " << (fra1 < fra2) << std::endl;
    std::cout << "f1 > f2: " << (fra1 > fra2) << std::endl;
    std::cout << "f1 <= f2: " << (fra1 <= fra2) << std::endl;
    std::cout << "f1 >= f2: " << (fra1 >= fra2) << std::endl;

    

    std::cout << "fra1.display() is : ";
    fra1.display();
    std::cout << std::endl;

    std::cout << "fra2.display() is : ";
    fra2.display();
    std::cout << std::endl;
    return 0;
}


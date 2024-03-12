#include <iostream>
#include <stdexcept>
#include <iomanip>
#include <math.h>

#include "./headers/RationalNumber.h"


int main() {

    int n;
    int d;

    double one = 4.00/6.00;
    double two = 2.00/4.00;

    // create a RationalNumber object named r1 using 
    // its no-arg constructor
    RationalNumber r1;

    // output the contents of r1 in fraction form
    r1.printRationalNumber();

    // output the contents of r1 in quotient form
    r1.printRationalNumber(1);

    // set r1's numerator to 4
    r1.setNumerator(4);

    // set r1's denominator to 6
    r1.setDenominator(6);

    // output the contents of r1 in fraction form
    r1.printRationalNumber();

    // output the contents of r1 in quotient form
    r1.printRationalNumber(one);

    // create a RationalNumber object named r1 using 
    // its two-arg constructor passing a numerator of
    // 2 and a denominator of 4
    RationalNumber r2(2,4);

    // output the contents of r2 in fraction form
    r2.printRationalNumber();

    // output the contents of r2 in quotient form
    r2.printRationalNumber(two);

    // get r2's numerator and then display it to stdout
    r2.getNumerator(n);
    cout << "Rational Number 2 Numerator = " <<n << endl;

    // get r2's denomiator and then display it to stdout
    r2.getDenominator(d);
    cout << "Rational Number 2 Denominator = " << d << endl;

    // call method on r1 that will test if it is equal to r2
    // and display its return to stdout as false or true
    cout << std::boolalpha;
    cout << "Rational 1 equal to Rational 2? " << r1.equalRationalNumber(r2) << endl;

    return 0;
}
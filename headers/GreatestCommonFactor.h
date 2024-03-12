// write the code for the GreatestCommonFactor abstract class
// pre-proccesor 
#include <iostream>

// use C++ standard library namespace 
using namespace std; 

// declare class
class GreatestCommonFactor
{
    // class members (fields, constructors, methods) may have 
    // the following modifiers: public, private, protected
    // Java interface) b/c its only method is going to be virtual 
    // it will have a declaration only and not a body.
    public: 
        // must use keyword virtual when declaring a virtual 
        // method and must initialize it to zero.
        virtual int gcf(int ,int ) = 0;
};
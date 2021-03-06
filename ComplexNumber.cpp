/* Implementation of Class ComplexNumber:		March 2022

   Demonstrates implementation of Operator Overloading functions.
   Operator Overloading allows us to define the behaviour of operators,
   such as +,-,*, <, << etc., for a class type.

    Implemented below:
   - operator overloading of "+" and "-" operators: (operator+) and (operator-)
   - operator overloading of global friend operators << and >>
*/
#include "ComplexNumber.h"
#include <iostream>
using namespace std;

/* Observe carefully that the stream insertion operator<< and
 * stream extraction operator>>  do NOT have the qualifier "ComplexNumber::"
 * in front of the function.  That means that they are not members of the
 * ComplexNumber class.  They are actually global functions (with global scope).
 * They can be called from anywhere (that has included ComplexNumber.h).
 * We have overloaded the "<<" and ">>" operators for the ComplexNumber class.

*/

/* the stream insertion "operator<<" is invoked by the following pattern :
   "outputStream << complexNumber"  e.g. cout << c1;
   Note that this is equivalent to the .toString() method in Java.
   It allows us to 'dump' and object's contents to the output stream.
*/

// Parameters:   << ("output stream", "reference to a constant ComplexNumber object")
// Returns:      reference to the output stream (usually 'cout')
//
ostream& operator<< (ostream& out, const ComplexNumber& ref_ComplexNumber)
{
    // As this is defined as a 'friend' of ComplexNumber in the header file,
    // code here has direct access to the private member data of the ComplexNumber object.
    // (So, we don't need to call getters and setters)

    // code to implement the operator<< functionality
    out << ref_ComplexNumber.real;
    out << " + " << ref_ComplexNumber.imaginary << "i" << endl;
    return out;
}

/* The extraction "operator>>"  is invoked by the following pattern
   "  inputStream >> complexNumber     "
   In this case we must prompt the user to enter a real and imaginary part,
   and then stream the inputted values into the target ComplexNumber object
   using the reference to that ComplexNumber.
*/

istream& operator>> (istream& in, ComplexNumber& ref_complexNumber)
{
    cout << "Enter Real Part ";
    in >> ref_complexNumber.real;
    cout << "Enter Imaginary Part ";
    in >> ref_complexNumber.imaginary;
    return in;
}

// Implementation of overloaded "plus" and "greater than" operators.
// The operator+ and operator> below are implemented as MEMBER functions,
// as they are invoked on ComplexNumber objects.
// i.e.  complexNumResult = complexNum1 + complexNum2
// The + operator is "invoked on the complexNum1 object"

/* Implementation of the "operator+"
   enabling the addition of two ComplexNumber objects.
   Usage: complexNumberResult = complexNumber1 + complexNumber2;
*/

ComplexNumber ComplexNumber::operator+ (const ComplexNumber& other) {
    ComplexNumber temp;
    temp.real = this->real + other.real;
    temp.imaginary = this->imaginary + other.imaginary;
    return temp; // return an object (by value)
}


int ComplexNumber::getReal()
{
    return real;
}
int  ComplexNumber::getImaginary()
{
    return imaginary;
}

void  ComplexNumber::setReal(int i)
{
    real = i;
}
void  ComplexNumber::setImaginary(int i)
{
    imaginary = i;
}
//TODO Implement a 'minus' operator function: "operator-"


/* Implementation of the greater than operator: "operator>"
   Assume that we need only compare the real parts of two complex numbers
   (and ignore the imaginary parts)
*/
bool ComplexNumber::operator> (const ComplexNumber& other) {
    if (this->real > other.real)
        return true;
    else
        return false;
}

//TODO Implement a "less than" operator< (using real part only for comparisons)
// Test it from main()



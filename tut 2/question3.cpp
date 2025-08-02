// 3. Complex Number Operations
// Construct a class named 'Complex' with private data members (real and imaginary) and the
// following member functions:
// • void set(float r, float i) - to initialize object values.
// • void display() - to display the complex number.
// • Complex sum(Complex c) - to add two complex numbers and return the result as a
// Complex object.
// Ensure that the properties (real and imaginary) are private, and the member functions are
// public.

#include <iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;

    public:
        void set(float r, float i){
        real=r;
        imag = i;
    }

        void display(){
        cout<<"The complex number is: "<<real<<"+"<<imag<<"i"<<endl;
    }

        Complex sum(Complex c){
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;


    }
    };



int main(){
    Complex c1,c2,c3;
    c1.set(2,3);
    c2.set(4,5);
    c3.display();
    c3=c1.sum(c2);
    c3.display();
    return 0;

}
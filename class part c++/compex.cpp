#include <iostream>
#include<cmath>
using namespace std;

class complex
{
    int real, imaginary;

public:
    // constructor
    complex();
    complex(int x, int y){
        real = x;
        imaginary = y;
    }
     // Destructor
    ~complex() {}

    // member function
    void add( complex c) {
        cout << "Result of addition: " << real + c.real << " + i" << imaginary + c.imaginary << endl;
    }

    void sub(complex c) {
        cout << "Result of subtraction: " << real - c.real << " + i" << imaginary - c.imaginary <<endl;
    }
    double modulus() {
        return sqrt(real * real + imaginary * imaginary);
    }

    double argument() {
        return atan2(imaginary, real);
    }
    void display()
    {
        cout << "The complex number is :  " << real << " + " <<"i"<< imaginary   << endl;
    }
};
// declaration of defult constructor
complex::complex(){

    real = 0;
    imaginary= 0;
}
int main()
{

    complex h,c1(5,7);
    complex c2(10, 20);

    h.display();
    c1.display();
    c2.display();

    c1.add(c2);
    c1.sub(c2);

    cout << "Modulus of c1: " << c1.modulus() <<endl;
    cout << "Argument of c1: " << c1.argument() <<endl;

    return 0;
}

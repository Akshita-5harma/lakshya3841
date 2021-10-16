#include<iostream>
using namespace std;

class Complex{
    int a ,b;
    public:
        Complex(void);                  //Constructor declaration
        void PrintData()
        {
            cout<<"Your number is: "<< a << " * " << b << " is "<<a*b<<endl;
        }
};

Complex::Complex(void)
{                                     // Default Constructor 
    a = 50;
    b = 20;
}

void Properties()
{
 // 1. It should be declared in the public section of the class
 // 2. They are automatically invoked whenever the object is created
 // 3. Do not have return types
 // 4. It can have default arguments
 // 5. We cannot refer to their addresses
}

int main()
{
    Complex c;
    c.PrintData();
return 0;
}

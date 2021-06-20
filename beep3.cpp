// Class templates with default Parameters
#include<iostream>
using namespace std;

template <class T = int,class Y = float>
class Jod{
    public:
        T a;
        Y b;
        Jod(T x,Y y){
            a = x;
            b = y;
        }
        void Display(void){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
}
};

int main(){
    Jod <>a('a',89);
    a.Display();
return 0;
}
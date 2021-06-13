// Constructor With Parameters;
#include<iostream>
using namespace std;

class Complex{
int a,b;
    public:
        Complex(int , int);
        void PrintData(){
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        }
};
Complex::Complex(int x, int y){
    a = x;
    b = y;
}

class Point{
    int x,y;
        public:
            Point(int a,int b){
                x = a;
                y = b;
            }
            void getPoint()
};

int main(){
Complex o1(6,10);
Complex o2 = Complex(7 ,10);

o1.PrintData();
o2.PrintData();
return 0;
}
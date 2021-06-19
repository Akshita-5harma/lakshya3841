#include<iostream>
using namespace std;
template <class T,class Y>
class Beep{
    public:
        T data1;
        Y data2;
            Beep(T a,Y b){
                data1 = a;
                data2 = b;
            }
            void display(){
                cout<<this->data1<<" "<<this->data2<<endl;
            }
};

int main(){
    Beep <char,int>object1('c',1);
    object1.display();
    return 0;
}
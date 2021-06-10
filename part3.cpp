#include<iostream>
#include<vector>
using namespace std;


void Display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<endl;
    }
    
}
int main(){
    vector<int> ve;
    int element,size;
    vector<int> vec1(9999999,69);
    Display(vec1);
    cout<<"Size of the vector: ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an Element: ";
        cin>>element;
        ve.push_back(element);
    }
    
vector<int>::iterator iter = ve.begin();
// ve.insert(iter,1,6);
// Display(ve);
return 0;
}
// Topic - Vector , List and Algorithms
#include<iostream>
#include<vector>//Contiguous memory Allocation
#include<list>// Doubly link list
#include<algorithm>
using namespace std;
// STL --> Generic Classes and Functions;
void CWH(){

}

int main(){
    // Vector - Sequence Container
    vector<int> help;
    help.push_back(3);
    help.push_back(2);
    help.push_back(1);
    help.push_back(4);
    help.push_back(5);

    list<int> v;
    v.push_back(1);
    list<int>::iterator it = v.begin();
    cout<<*it<<endl;

    // Iterators are similar and simple as pointers
    // vector<int>::iterator itr = help.begin();
    auto itr = help.begin();
    cout<<*(itr+1+1)<<endl;
    while(itr != help.end()){
        cout<<"Value = "<<*itr<<endl;
    itr++;
    }

    cout<<"Size = "<<help.size()<<endl;
    
    help.clear();

    cout<<"Size = "<<help.size()<<endl;

return 0;
}
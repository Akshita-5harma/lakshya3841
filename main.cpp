#include <iostream>
using namespace std;

class myClass{
	private:
		string name;
		int age;
		char gender;
	public:
		int d,e;
		void setData(string a1,int b1,char c1);
		void outData(){
		cout<<"\nThe name of dude "<<name<<endl;
		cout<<"The age of dude is "<<age<<endl;
		cout<<"The gender of dude is "<<gender<<endl;
		}
};

void myClass :: setData(string a1,int b1,char c1){
name = a1;
age = b1;
gender = c1;
}

int main(){
	string name1;
	int age1;
	char gender1;
cout<<"Enter your name: ";
cin>>name1;
cout<<endl<<"Enter your age: ";
cin>>age1;
cout<<endl<<"Enter your gender(m,f): ";
cin>>gender1;
	myClass nums1;
	nums1.setData(name1,age1,gender1);
	nums1.outData();
return 0;
}

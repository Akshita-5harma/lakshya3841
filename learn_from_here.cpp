#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	
//	float f1 = 35e3;
//	double d1 =12E4;
//	cout<<f1<<endl;
//	cout<<d1<endl;
//	bool yo = true;
//	bool oy = false;
//	cout <<yo<<endl<<oy<<endl;
//	char section = 'D';
//	char a = '1',b = '2',c='3';
//	cout << section<<endl;
//	string name;
//	cout<<"Enter name here"<<endl;
//	cin>>name;
//	cout<<"Hello "<<name<<endl;
//	string first = "Hello ";
//	string last = "World";
//	cout<< first.append(last);
//	string l = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	cout<<l.length();
//	string lol = "Hello";
//	cout<<lol[0]<<endl;// OUTPUT is H
//	lol[0] = 'Y';
//	cout<<lol<<endl;
//	string name;
//	cout<<"Enter your ID name here"<<endl;
//	getline (cin, name);
//	cout<<"Your ID is "<<name<<endl;

	
//	cout<< max(5, 10)<<endl;
//	cout<< min(5, 10)<<endl;

 			/* New header file <cmath> */
//	cout<< sqrt(64)<<endl;
//	cout<< round(2.6)<<endl;
//	cout<< log(2)<<endl;
	/* See bookmarked page for referance (for me not you) */
//	bool imGood = true;
//	bool imBad = false;
//	cout<<imBad<<endl<<imGood<<endl;
//	cout<< (9 > 5)<<endl;/* if term is true 1 will be output 0 for false*
//	cout<<(10==20)<<endl;// Answer is 0 false 
	

	/*                      CONDITIONS                      */
/*	int a = 20;
		if( a < 30 ){
	//BLOCK OF CODE TO BE EXECUTED WHEN THE CONDITION IS TRUE
	cout<<"GOOD DAY "<<endl;
	}else{ cout<<"GOOD EVENING "<<endl; } */

/*	int time = 22;
		if(time < 10){
			cout<<"Good morning"<<endl;
		}else if(time < 20){
		cout<<"GOOD DAY"<<endl;
		}else {
		cout<<"Good evening"<<endl;
		}	*/

	//SHORT HAND IF ELSE
/*	
	int mark;
	cout<<"Enter your mark"<<endl;
	cin>>mark;
mark >=35 ? cout<<"You have passed in exam" : cout<<"You have failed"<<endl;*/

			// SWITCH STATEMENTS //
/*	int day =0;
		switch(day){
			case 1:
				cout<<"Monday"<<endl;
				break;
			case 2:
				cout<<"Tuesday"<<endl;
				break;	
			case 3:
				cout<<"Wednesday"<<endl;
				break;
			case 4:
				cout<<"Thursday"<<endl;
				break;
			case 5:
				cout<<"friday"<<endl;
				break;
			case 6:
				cout<<"Saturday"<<endl;
				break;
			case 7:
				cout<<"Sunday"<<endl;
			break;	
				default:
				cout<<"Orr kitna aage jaoge"<<endl;
		} */

	/*---------------------LOOOOOPS---------------------*/
// while loops

/*	int i = 0;
		while( i < 5 ) {
		cout<<i<<endl;
		i++;
		}   */
// Do while loops

/*	int i = 0;
	do {
		cout<<i<<endl;
		i++;
}while(i < 5);
*/
		//     FOR LOOPS     //
	/*for(int i=0; i<5; i++){
cout<<i<<endl;
	}*/

	// BREAK AND CONTINUE
/*	for(int i =0;i<10;i++){
	if(i==5){
	break;
	}
	//WE WILL SEE FURTHER HOW TO APPLY BREAK AND CONTINUE IN WHILE LOOPS
	cout<<i<<endl;	
	}*/
		//	      ARRAYS		//
/*	int marks[4] = {80,50,70,60};
marks[0] = 79;		// cout<<marks[0]<<endl;
for(int i = 0;i<4;i++){
	cout<<marks[i]<<endl;
}
string languages[2];
languages[0] = {"C++"};*/
		//            REFERENCES                //
/*	string food = "Tortilla";
string &meal = food;//value which was in food has been assigned to meal too
cout<<meal<<endl<<food<<endl;*/

		//		MEMORY ADDRESS			//
// OR POINTERS
int a=13;//The value have passed through the ram so have been given a address
cout<<&a<<endl;//output is 0x7ffc600255ac

return 0;
}

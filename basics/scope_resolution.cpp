// how to access global variables using :: operator -> scope resolution operator 
#include<iostream>
using namespace std;
int x=10;	// x declare globaly
int main()
{
	int x=20;  // x declare localy
	cout<<"local :"<<x<<endl;	// it will give local variable 
	cout<<"Global :"<<::x<<endl;	// :: -> scope resolution operator will always gives global value
}

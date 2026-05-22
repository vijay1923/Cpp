// Exception handling 2
// dividing two numbers
#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter the a and b"<<endl;
	cin>>a>>b;
	try
	{
		if(a==0 |b==0)
			throw "Dividing by zero";
		r=a/b;
		cout<<"Result :"<<r<<endl;
	}
	catch(const char *s)
	{
		cout<<"exce:"<<s<<endl;
	}
	cout<<"Welcome to C++ programming"<<endl;
}

#include<iostream>
using namespace std;
int division(int a,int b)
{
		if(a==0|b==0)
		throw "Dividing by zero";
		else
		return a/b;
}
int main()
{
	int a,b,r;
	cout<<"Eneter the a and b"<<endl;
	cin>>a>>b;
	try
	{
		r=division(a,b);
		cout<<"Result : "<<r<<endl;
	}
	catch(const char *s)
	{
		cout<<"exce:"<<s<<endl;
	}
	cout<<"Welcome to the Cpp programming"<<endl;
}

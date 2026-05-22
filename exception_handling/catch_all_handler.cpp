// catch all / default catch 
// catch all must be at last the program 
#include<iostream>
using namespace std;
int main()
{
	try
	{

		throw 12.4;
	}
	catch(int a)
	{
		cout<<"Integer catched :"<<a<<endl;
	}
	catch(const char *s)
	{
		cout<<"String catched :"<<s<<endl;
	}
	catch(float f)
	{
		cout<<"Float catched :"<<f<<endl;
	}
	catch(...)
	{
		cout<<"Catch all / default catch"<<endl;
	}
}

#include<iostream>
using namespace std;
void user()
{
	cout<<"Im the USER"<<endl;
	throw "N/W issue";
}
void core()
{
	try
	{
		user();
	}
	catch(const char *s)
	{
		cout<<"Im core :"<<s<<endl;
		throw;
	}
}
int main()
{
	try
	{
		core();
	}
	catch(const char *s)
	{
		cout<<"Im Higher :"<<s<<endl;
	}
	cout<<"Feel free today"<<endl;
}

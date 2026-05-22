// Unhandled Exception 
// The exception which is unable to handl called as unhandled exception
#include<iostream>
using namespace std;
void emergency()
{
	cout<<"Exception unhandled "<<endl;
	cout<<"Im Vengence "<<endl;
	exit(0);
}
int main()
{
	try
	{
		set_terminate(emergency);
		throw 10;
	}
	catch(const char *s)
	{
		cout<<"exce:"<<s<<endl;
	}

}

// Exception Handling 
#include<iostream>
using namespace std;
int main()
{
	try
	{
		throw " IM VENGENCE";
	}
	catch(const char *s)
	{
		cout<<"String catched : "<<s<<endl;
	}
}

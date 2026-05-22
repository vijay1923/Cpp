// Private constuctor and destructor 
// static member function 
#include<iostream>
using namespace std;
class A
{
	int x;
	A()
	{
		cout<<"Private constructor "<<endl;
	}
	~A()
	{
		cout<<"Private destructor "<<endl;
	}
	public:
	static void create_object()
	{
		A obj;
	}
};
int main()
{
	A::create_object();
}

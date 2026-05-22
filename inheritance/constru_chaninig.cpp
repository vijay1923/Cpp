#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
	Base()
	{
		cout<<"Default constructor base"<<endl;
	}
	Base(int a):x(a)
	{
		cout<<"Parametrized constructor Base"<<endl;
	}
	~Base()
	{
		cout<<"Destructor Base"<<endl;
	}
};
class Derived :public Base
{
	int y;
	public:
	Derived()
	{
		cout<<"Default constructor derived "<<endl;
	}
	Derived(int a,int b):Base(a),y(b)
	{
		cout<<"Parametrized Derived "<<endl;
	}
	~Derived()
	{
		cout<<"Destructor Derived "<<endl;
	}
};
int main()
{
	Derived d(10,20);
}

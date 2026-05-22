// constructor and destructor in inheritance 
#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
	Base()	// constructor of base
	{
		cout<<"Base constructot"<<endl;
		x=100;
	}
	~Base()	// destructor of base
	{
		cout<<"Base destructor"<<endl;
	}

};
class Derived :public Base
{
	int y;
	public:
	Derived()	// constructor of derivedd	
	{
		cout<<"Derived constructor "<<endl;
		y=200;
	}
	~Derived() // destructor of derived 
	{
		cout<<"Derived destructor"<<endl;
	}
};
int main()
{
	Derived d;
	Base b;
}

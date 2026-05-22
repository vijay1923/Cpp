// pure virtual function
// in pure virtual functin Base class cant have the its own object
// declaration of pure virtual fun must-should be in a base class 
#include<iostream>
using namespace std;
class Base
{
	public:
	virtual void test()=0;  // pure virtual fun declaration
};
class Derived : public Base
{
	void test()
	{
		cout<<"Test in derived "<<endl;
	}
};
int main()
{
	Base *ptr;
	Derived d;
	ptr=&d;
	ptr->test();
}

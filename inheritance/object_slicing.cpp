// Object slicing 
#include<iostream>
using namespace std;
class Base
{
	int x;
	public:
	Base(){}
	Base(int a):x(a){}
	void get_data()
	{
		cout<<x<<endl;
	}

};
class Derived :public Base
{
	int y;
	public:
	Derived(){}
	Derived(int a,int b):Base(a),y(b){}
	void get_data()
	{
		cout<<y<<endl;
	}
};
int main()
{
	Base b;
	b.get_data();
	Derived d(10,20);
	b=d;	// Object slicing 
	b.get_data();
	d.get_data();
}

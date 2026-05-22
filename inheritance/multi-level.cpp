#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A(){}
	A(int a):x(a)
	{
		cout<<"Para A"<<endl;
	}
	void get_data()
	{
		cout<<x<<endl;
	}
	~A()
	{
		cout<<"Destructor A"<<endl;
	}
};
class B:public A
{
	int y;
	public:
	B(){}
	B(int a,int b):A(a),y(b)
	{
		cout<<"Para B"<<endl;
	}
	void get_data()
	{
		cout<<y<<endl;
	}
	~B()
	{
		cout<<"Destructor B"<<endl;
	}

};
class C:public B
{
	int z;
	public:
	C(){}
	C(int a,int b,int c):B(a,b),z(c)
	{
		cout<<"Para C"<<endl;
	}
	void get_data()
	{
		cout<<z<<endl;
	}
	~C()
	{
		cout<<"Destructor C"<<endl;
	}
};
int main()
{
	C obj(10,20,30);
	obj.A::get_data();
	obj.B::get_data();
	obj.C::get_data();
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	cout<<sizeof(C)<<endl;
}

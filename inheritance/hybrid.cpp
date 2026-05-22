// Hybride Inheritance 
#include<iostream>
using namespace std;
class A
{
	int x;
	public:
	A(){}
	A(int a):x(a)
	{
		cout<<"Constructor A"<<endl;
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
		cout<<"Constructor B"<<endl;
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
class C
{
	int z;
	public:
	C(){}
	C(int a):z(a)
	{
		cout<<"Constructor C"<<endl;
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
class D:public B,public C
{
	int m;
	public:
	D(){}
	D(int a,int b,int c,int d):B(a,b),C(c),m(d)
	{
		cout<<"Constructor D"<<endl;
	}
	void get_data()
	{
		cout<<m<<endl;
	}
	~D()
	{
		cout<<"Destructor D"<<endl;
	}

};
int main()
{
	D obj(10,20,30,40);
	cout<<sizeof(A)<<endl;	// 4
	cout<<sizeof(B)<<endl;	// 8
	cout<<sizeof(C)<<endl;	// 4
	cout<<sizeof(D)<<endl;	// 16
	cout<<"###########"<<endl;
	obj.A::get_data();
	obj.B::get_data();
	obj.C::get_data();
	obj.D::get_data();
}


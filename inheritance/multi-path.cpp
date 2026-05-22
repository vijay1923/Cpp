#include<iostream>
using namespace std;
class A
{
	public:
		int x;
		A()
		{
			cout<<"Constructor A"<<endl;
		}
		A(int a):x(a)
	{
		cout<<"Constructor A"<<endl;
	}
		~A()
		{
			cout<<"Destructor A"<<endl;
		}
};
//class B:public A
class B: virtual public A 
{
	public:
		int y;
		B()
		{
			cout<<"Constructor B"<<endl;
		}
		B(int a,int b):A(a),y(b)
	{
		cout<<"Constructor B"<<endl;
	}
		~B()
		{
			cout<<"Destructor B"<<endl;
		}

};
//class C:public A
class C: virtual public A 
{
	public:
		int z;
		C()
		{
			cout<<"Constructor C"<<endl;
		}
		C(int a,int b):A(a),z(b)
	{
		cout<<"Constructor C"<<endl;
	}
		~C()
		{
			cout<<"Destructor C"<<endl;
		}
};
class D:public B,public C
{
	public:
		int m;
		D()
		{
			cout<<"Constructor D"<<endl;
		}
		D(int a,int b,int c,int d,int e):B(a,b),C(c,d),m(e)
	{
		cout<<"Constructor D"<<endl;
	}
		~D()
		{
			cout<<"Destructor D"<<endl;
		}
		void get_data()
		{
			cout<<B::x<<endl;
			cout<<C::x<<endl;
			cout<<y<<endl;
			cout<<z<<endl;
			cout<<m<<endl;
		}
};
int main()
{
	D obj(10,20,30,40,50);
	obj.get_data();
	cout<<"***********"<<endl;
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	cout<<sizeof(C)<<endl;
	cout<<sizeof(D)<<endl;

}

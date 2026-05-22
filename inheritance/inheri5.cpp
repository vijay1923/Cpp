// private data of Base class can inherited by using member function of Base class 
#include<iostream>
using namespace std;
class Base
{
	int x,y;
	public:
	void set_data(int a,int b)
	{
		x=a,y=b;
		get_data();
	}
	void get_data()
	{
		cout<<x<<" " <<y<<endl;
	}
};
class Derived : private Base
{
	public:
		void modify(int a,int b)
		{
			set_data(a,b);
		}

};
int main()
{
	Derived obj;
	obj.modify(10,20);
}

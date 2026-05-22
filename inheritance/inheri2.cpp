#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A()
	{
		x=10,y=20;
	}
	void get_dataA()
	{
		cout<<x<<" "<<y<<endl;
	}
};
class B:public A
{
	int m,n;
	public:
	B()
	{
		m=100,n=200;
	}
	void get_dataB()
	{
		cout<<m<<" "<<n<<endl;
	}
};
int main()
{
	B obj;
	obj.get_dataA();
	obj.get_dataB();
}

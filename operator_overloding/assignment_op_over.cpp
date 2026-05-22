// assignment (=) is only overloded by only the friend functiion
#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A():x(0),y(0){}
	A(int a,int b):x(a),y(b){}
	void get_data()
	{
		cout<<x<<" "<<y<<endl;
	}
	void operator =(A t)
	{
		cout<<"Operator ="<<endl;
		x=t.x,y=t.y;
	}
};
int main()
{
	A obj1(100,200),obj2;
	obj2=obj1;	// obj2.opeator=(obj1);
	obj2.get_data();
}

// unary operators overloaded using friend function
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
	friend A operator +(A t,A t1);
	friend A operator -(A t,A t1);
	friend A operator *(A t,A t1);
	friend A operator /(A t, A t1);
	friend A operator %(A t,A t1);
};

A operator +(A t,A t1)
{
	A ret;
	ret.x=t.x+t1.x;
	ret.y=t.y+t1.y;
	return ret;
}
A operator -(A t,A t1)
{
	A ret;
	ret.x=t.x-t1.x;
	ret.y=t.y-t1.y;
	return ret;
}
A operator *(A t,A t1)
{
	A ret;
	ret.x=t.x*t1.x;
	ret.y=t.y*t1.y;
	return ret;
}
A operator /(A t,A t1)
{
	A ret;
	ret.x=t.x/t1.x;
	ret.y=t.y/t1.y;
	return ret;
}
A operator %(A t,A t1)
{
	A ret;
	ret.x=t.x%t1.x;
	ret.y=t.y%t1.y;
	return ret;
}
int main()
{
A o1(1,2),o2(3,4),o3(5,6),o4(7,8),o5(9,10),o6(11,12),o7;
o7=o1+o2-o3*o4/o5%o6;
o7.get_data();
}

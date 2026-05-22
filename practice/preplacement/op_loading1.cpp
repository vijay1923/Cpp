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
	friend A operator ++(A& t);
	friend A operator ++(A& t,int );
};
A operator++ (A& t)
{
	cout<<" pre ++ overloded"<<endl;
return A(++t.x,++t.y);
#if 0
	A ret;
	ret.x=++t.x;
	ret.y=++t.y;
	return ret;
#endif 
}
A operator ++(A& t,int )
{
	cout<<"post ++ overloded"<<endl;
return A(t.x++,t.y++);
#if 0
	A ret;
	ret.x=t.x++;
	ret.y=t.y++;
	return ret;
#endif
}
int main()
{
	A obj1(10,20),obj2;
	obj2=++obj1;
	obj1.get_data();
	obj2.get_data();

	obj2=obj1++;
	obj1.get_data();
	obj2.get_data();
}

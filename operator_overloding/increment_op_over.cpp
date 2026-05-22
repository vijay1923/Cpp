// increment and decrement operator overloding 
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

	friend A operator ++ (A& t,int );
	friend A operator ++ (A& t );
};
A operator ++ (A& t,int )
{
	return A(t.x++,t.y++);
	//     OR
	/* 
	   A res;
	   tes.x=t.x++;
	   tes.y=t.y++;
	   return res;    */

}
A operator ++ (A& t )
{

	return A(++t.x,++t.y);
}
int main()
{
	A obj1(50,500),obj2;
	cout<<"Before "<<endl;
	obj1.get_data();
	cout<<"After "<<endl;
	//	obj2=obj1++;	// post increment 
	obj2=++obj1;	// preincrement
	obj2.get_data();
}


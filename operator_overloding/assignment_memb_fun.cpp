// Aithmatic operator overloding through member function 
#include<iostream>
using namespace std;
class A
{
	int n1,n2;
	public:
	A():n1(0),n2(0){}
	A(int a,int b):n1(a),n2(b){}
	~A(){}
	A operator +(A t)
	{

		A ret;
		ret.n1=n1+t.n1;
		ret.n2=n2+t.n2;
		return ret;
	}
	A operator -(A t)
	{
		A ret;
		ret.n1=n1-t.n1;
		ret.n2=n2-t.n2;
		return ret;

	}
	A operator *(A t)
	{
		A ret;
		ret.n1=n1*t.n1;
		ret.n2=n2*t.n2;
		return ret;
	}
	A operator /(A t)
	{
		A ret;
		ret.n1=n1/t.n1;
		ret.n2=n2/t.n2;
		return ret;
	}
	void get_data()
	{
		cout<<"n1 = "<<n1<<endl;
		cout<<"n2 = "<<n2<<endl;
	}
};
int main()
{
	A a1(1,2),a2(3,4),a3(5,6),a4(7,8),a5(9,10),a6;
//	a3=a1+a2;
//	a3.get_data();
//	a3=a1-a2;
//	a4=a1+a2-a3;
//	a5=a1+a2*a3-a4;
	a6=a1+a2-a3*a4/a5;
	a6.get_data();
}

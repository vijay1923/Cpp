// operator overloding using friend function 
#include<iostream>
using namespace std;
class complex 
{
	int real,img;
	public:
	complex():real(0),img(0){}
	complex(int a,int b):real(a),img(b){}
	void get_complex()
	{
		if(img<0)
		cout<<real<<img<<"j"<<endl;
		else
		cout<<real<<"+"<<img<<"j"<<endl;
	}
	friend complex operator +(complex t1,complex t2);
};
complex operator +(complex t1,complex t2)
{
	cout<<"Operator + overloded "<<endl;
	complex res;
	res.real=t1.real+t2.real;
	res.img=t1.img+t2.img;
	return res;
}
int main()
{
	complex p1(100,200),p2(1000,2000),p3;
	p3=p1+p2;
	p3.get_complex();

}

// addition operator overloading 
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
	complex operator +(complex t2)
	{
		cout<<"operator + overloded"<<endl;
		complex res;
		res.real=real+t2.real;
		res.img=img+t2.img;
		return res;
	}

};
int main()
{
	complex c1(10,100),c2(20,200),c3(1,2),c4(1000,2000),c5;
	c5=c1+c2+c3+c4;
	c5.get_complex();

}

#include<iostream>
using namespace std;
class family
{
	int cash,gold;
	public:
	void set_data(int ,int );
	void get_data();
};

int main()
{
	family f1,f2;
	f1.set_data(100,200);
	f2.set_data(10,20);
	f1.get_data();
	f2.get_data();
}

void family::set_data(int a,int b)
{
	cout<<"get -"<<this<<endl;
	this->cash=a,this->gold=b;
}

void family::get_data()
{
	cout<<"get -"<<this<<endl;
	cout<<cash<<" "<<gold<<endl;
}

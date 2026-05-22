// copy constructor 
#include<iostream>
using namespace std;
class vijay
{
	int cash,gold;
	public:
	vijay()
	{
		cout<<"default constructor"<<endl;
		cash=10,gold=20;
	}
	vijay(int a,int b)
	{
		cout<<"parametrized constructor"<<endl;
		cash=a,gold=b;
	}
	vijay(vijay &t)
	{
		cout<<"copy constructor"<<endl;
		cash=t.cash,gold=t.gold;
	}
	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}
};

// NON-MEMBER FUNCTION// 

vijay &test(vijay &x )
{
	cout<<"test function"<<endl;
	return x;
}
int main()
{
	vijay f1,f2(100,200),f3(f2),f4=f2,f5,f6;
	f5=f2;
	f6=f2;
	test(f5);
}

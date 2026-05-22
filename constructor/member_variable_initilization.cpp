#include<iostream>
using namespace std;
class vijay 
{
	int cash,gold;
	public:
	vijay():cash(10),gold(20)
	{
		cout<<"default constructor"<<endl;
	}
	vijay(int a,int b):cash(a),gold(b)
	{
		cout<<"parametrized constructor"<<endl;
	}

	vijay(vijay t):cash(t.cash),gold(t.gold)
	{
		cout<<"copy constructor"<<endl;
	}
	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}

};

vijay test(vijay x)
{
	cout<<"test"<<endl;
	return x;
}

int main()
{
	vijay f1,f2(100,200),f3(f2),f4=f2,f5;
	f5=f2;
	test(f5);

}

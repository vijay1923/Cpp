// dynamic constructor is used to allocate dynamic memory for ojects

#include<iostream>
using namespace std;
class vijay
{
	int cash,gold;
	public:
	vijay():cash(100),gold(200)
	{
		cout<<"default constructor "<<endl;
	}
	vijay (int a,int b):cash(a),gold(b)
	{
		cout<<"parametrized constructor "<<endl;
	}
	vijay (vijay &t):cash(t.cash),gold(t.gold)
	{
		cout<<"copy constructor"<<endl;
	}
	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}

};
int main()
{
	vijay *p1,*p2,*p3;
	p1=new vijay;        // default 
	p2=new vijay(10,20);	// parametrized 
	p3=new vijay(*p2);	// copy constructor 

}

//  parametrized constructor 
// f2 obj will parametrized constructor 
#include<iostream>
using namespace std;
class family
{
	int cash,gold;
	public:
	family()
	{
		cout<<"constructor"<<endl;
		cash=10,gold=20;
	}
	family(int a,int b)
	{
		cout<<"parametrized"<<endl;
		cash=1,gold=b;
	}

};
int main()
{
	family f1,f2(100,200);

}

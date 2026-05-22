// constructor should not be in private section 
// it will call automatically
#include<iostream>
using namespace std;
class family
{
	int cash,gold;
public:
	family()
	{
		cout<<"constructor"<<endl;
		cash=100,gold=200;
	}

	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}
};
int main()
{
	family f1,f2,f3,f4;

}

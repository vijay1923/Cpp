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
	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}
};
int main()
{
	family f;
	f.get_data();
}

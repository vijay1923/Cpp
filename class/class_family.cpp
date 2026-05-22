#include<iostream>
using namespace std;
class family
{
	int cash,gold;
	public:
	void set_data()
	{
		cin>>cash>>gold;
	}
	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}

};
int main()
{
	family f1,f2;
	f1.set_data();
	f2.set_data();
	f1.get_data();
	f2.get_data();
}

/// class is a collection of the data members and member functions
// class is a user defined data type

#include <iostream>
using namespace std;
class family
{
	public:
	int cash, gold;  // public data members
	family()   // constructor 
	{
		cout<<"Constructor "<<endl;
		cout<<"cash and gold in constructor "<<endl;
		cash=10,gold=20;
		cout<<"cash "<<cash<<endl;
		cout<<"gold "<<gold<<endl;
	}
	void get_data(void)   // member function
	{
		cash=100,gold=200;
		cout<<"cash and gold in get_data "<<endl;
		cout<<"cash "<<cash<<endl;
		cout<<"gold "<<gold<<endl;

	}

};
int main()
{

	family o1;
	o1.get_data();

}

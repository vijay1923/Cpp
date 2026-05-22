#include<iostream>
using namespace std;
class A
{
	int x;
	static int c;
	public:
	A()
	{
		cout<<"Contructor "<<endl;
	}
	~A()
	{
		cout<<"Destruuctor "<<endl;
	}
	static void get_data()
	{
	//	cout<<x<<endl;		// Error 
	//	cout<<c<<endl;		// Error 
		cout<<"vijay"<<endl;
	}
};
int main()
{
	A obj;
//	obj.get_data();			//  Error --> through object you cant call static function 
A::get_data();
}

// defult aurgument to the constructor
#include<iostream>
using namespace std;
class vijay
{
	int cash,gold;
	public:
	vijay(int a=45,int b=78)
	{
		cout<<"parametrized"<<endl;
		cash=a,gold=b;
	}
	void get_data()
	{
		cout<<cash<<" "<<gold<<endl;
	}


};
int main()
{
	vijay f1,f2(200,400); // at the creating of object we are passing values so it will take these aurgument
	f1.get_data();   // f1 will take 45 and 78
	f2.get_data();	  // f2 wiltake 100 and 200
}

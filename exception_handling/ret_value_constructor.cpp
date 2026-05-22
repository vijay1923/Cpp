// return value frome a constructor 
// in this example object will not be create 
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			throw 10;
			cout<<"Constructor "<<endl;
		}
		~A()
		{
			cout<<"Destructor "<<endl;
		}
};
int main()
{
	try
	{
		A obj;
	}
	catch(int a)
	{
		cout<<"Constructor return "<<a<<endl;
		cout<<"Object is not created "<<endl;
	}

}

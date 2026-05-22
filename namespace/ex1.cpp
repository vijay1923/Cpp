// Example NO-1
#include<iostream>
using namespace std;
namespace first
{
	int x=5;
	int y=10;
}
namespace second
{
	double x=3.1234;
	double y=2.3456;
}

int main()
{
	using first::x;
	using second::y;
	bool a,b;
	a=x>y;
	b=first::y<second::y;
	cout<<boolalpha;	// to actovate boolalpha flag
	cout<<"a :"<<a<<endl;     //  true  
	cout<<"b :"<<b<<endl;	  // false

}

// Nested namespace 
#include<iostream>
using namespace std;

namespace first
{
	int a=100;
	namespace second
	{
		int b=200;
		namespace forth
		{
			int d=400;
		}
	}
	namespace third
	{
		int c=300;
	}

}

int main()
{
cout<<first::a<<endl;   // 100
cout<<first::second::b<<endl; // 200
cout<<first::third::c<<endl;  // 300 
cout<<first::second::forth::d<<endl; //400
}

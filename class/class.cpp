#include<iostream>
using namespace std;
class a
{
	public:
		int x;
		void fun(void )
		{
			cout<<"fun in class "<<endl;
			cout<<x<<endl;
		}

};

int main()
{
	a f;
	f.x=100;
	f.fun();

}
